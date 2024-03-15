#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
private:
    double s1, s2, s3; 

public:
    // Constructor
    Triangle(double side1, double side2, double side3) : s1(side1), s2(side2), s3(side3) {}

    // Function to calculate the area of the triangle
    double getArea() const
    {
        // Using Heron's formula to calculate the area
        double s = (s1 + s2 + s3) / 2;
        return sqrt(s * (s - s1) * (s - s2) * (s - s3));
    }
};

int main()
{
    // double side1 = 3, side2 = 4, side3 = 5;

    Triangle myTriangle(3,4,5);

    cout << "Area of the triangle is: " << myTriangle.getArea() << endl;

    return 0;
}
