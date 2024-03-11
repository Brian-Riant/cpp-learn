#include <iostream>

using namespace std;

int main()
{
    int time = 22;
    cout << "Enter time: ";
    cin >> time;

    if (time < 10)
    {
        cout << "Good morning ";
    }
    else if (10 < time < 20)
    {
        cout << "Good day";
    }
    else
    {
        cout << "Good evening.";
    }

    return 0;
}