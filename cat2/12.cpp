#include <iostream>

using namespace std;

class time
{
private:
    int hours;
    int minutes;

public:
    // Function to set the specified value in object
    void settime(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    // Function to display time object
    void showtime()
    {
        cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
    }

    // Function to sum two time objects & return time
    time sum(time t2)
    {
        time result;

        result.hours = hours + t2.hours;
        result.minutes = minutes + t2.minutes;

        // Adjust hours and minutes if necessary
        if (result.minutes >= 60)
        {
            result.hours += result.minutes / 60;
            result.minutes %= 60;
        }

        return result;
    }
};

int main()
{
    // Create three time objects
    time t1, t2, t3;

    // Set the value in the first two objects
    t1.settime(2, 30);
    t2.settime(1, 45);

    // Calculate sum and assign it to the third object
    t3 = t1.sum(t2);

    // Display all time objects
    cout << "First time object: ";
    t1.showtime();
    cout << "Second time object: ";
    t2.showtime();
    cout << "Sum of the two time objects: ";
    t3.showtime();

    return 0;
}
