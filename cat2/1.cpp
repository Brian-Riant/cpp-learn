#include <iostream>

using namespace std;

int sum(int num1, int num2)

{
    return num1 + num2;
}

int main()
{
    int x;
    int y;
    cout << "enter the value of x ";
    cin >> x;
    cout << "enter the value of y  ";
    cin >> y;
    int results = sum(x, y);

    cout << "The sum of " << x << " and " << y << " is " << results;

    return 0;
}