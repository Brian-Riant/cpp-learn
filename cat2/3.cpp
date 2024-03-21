#include <iostream>

using namespace std;

// Function to calculate power of a number without using math library
double power(double n, int p = 2)
{
    double result = 1.0;
    for (int i = 0; i < p; ++i)
    {
        result *= n;
    }
    return result;
}

int main()
{
    double x;
    int y;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the exponent (default is 2 if omitted): ";
    cin >> y;

    double result = power(x, y);

    cout << "The result of " << x << " raised to the power of " << y << " is " << result << endl;

    return 0;
}
