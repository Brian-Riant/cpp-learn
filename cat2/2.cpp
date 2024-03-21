#include <iostream>
using namespace std;

// Function to calculate factorial
long fact(int n)
{
    if (n <= 0)
    {
        cout << "Factorial is invalid";
        return 0;
    }
    else
    {
        long factorial = 1;
        for (int i = 2; i <= n; ++i)
        {
            factorial *= i;
        }
        return factorial;
    }
}

int main()
{
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    long result = fact(x);
    cout << "Factorial of " << x << " = " << result;

    return 0;
}