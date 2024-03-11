#include <iostream>

using namespace std;

// Function to check if a given year is a leap year
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to print the calendar of a given year
void printCalendar(int year)
{
    // Array to store the number of days in each month
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Update days in February for leap years
    if (isLeapYear(year))
    {
        daysInMonth[1] = 29;
    }

    // Array to store the names of the months
    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};

    // Print the calendar
    cout << "Calendar for year " << year << ":" << endl;
    for (int month = 0; month < 12; ++month)
    {
        cout << months[month] << ":" << endl;
        cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;

        // Calculate the day of the week for the first day of the month
        int startingDay = (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
        for (int i = 0; i < startingDay; ++i)
        {
            cout << "    ";
        }

        // Print the days of the month
        for (int day = 1; day <= daysInMonth[month]; ++day)
        {
            printf("%3d ", day);
            startingDay++;
            if (startingDay > 6)
            {
                startingDay = 0;
                cout << endl;
            }
        }

        // Print new line after each month
        cout << endl;
    }
}

int main()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;

    printCalendar(year);

    return 0;
}
