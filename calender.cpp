#include <iostream>

using namespace std;

// Function to check if the year is a leap year
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int daysInMonth(int month, int year)
{
    if (month == 2)
    {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}

// Function to print the calendar for a given year
void printCalendar(int year)
{
    cout << "Calendar for Year " << year << ":" << endl;

    // Array to store names of months
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // Print calendar for each month
    for (int month = 1; month <= 12; ++month)
    {
        cout << "\n---------------- " << months[month - 1] << " ----------------\n"
             << endl;
        cout << " Sun Mon Tue Wed Thu Fri Sat\n";

        // Determine the starting day of the week for the first day of the month
        int startDay = 1;
        int totalDays = 0;
        for (int i = 1900; i < year; ++i)
        {
            totalDays += isLeapYear(i) ? 366 : 365;
        }
        for (int i = 1; i < month; ++i)
        {
            totalDays += daysInMonth(i, year);
        }
        startDay = (totalDays % 7 + 1) % 7;

        // Print leading spaces before the first day of the month
        for (int i = 0; i < startDay; ++i)
        {
            cout << "    ";
        }

        // Print the days of the month
        int days = daysInMonth(month, year);
        for (int day = 1; day <= days; ++day)
        {
            printf("%4d", day);
            startDay++;
            if (startDay > 6 && day != days)
            {
                cout << endl;
                startDay = 0;
            }
        }

        cout << endl;
    }
}

int main()
{
    int year;

    // Input year from user
    cout << "Enter the year: ";
    cin >> year;

    // Print calendar for the entered year
    printCalendar(year);

    return 0;
}
