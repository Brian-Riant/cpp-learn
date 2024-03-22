#include <iostream>

using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    void setlength(float len)
    {
        length = len;
    }

    void setwidth(float wid)
    {
        width = wid;
    }

    float perimeter()
    {
        return 2 * (length + width);
    }

    float area()
    {
        return length * width;
    }

    void show()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    int sameArea(Rectangle other)
    {
        float this_area = area();
        float other_area = other.area();
        if (this_area == other_area)
            return 1;
        else
            return 0;
    }
};

int main()
{
    Rectangle r1, r2;

    // Setting dimensions for first rectangle
    r1.setlength(5.0);
    r1.setwidth(3.0);

    // Setting dimensions for second rectangle
    r2.setlength(4.0);
    r2.setwidth(6.0);

    // Displaying dimensions of rectangles
    cout << "Rectangle 1:" << endl;
    r1.show();
    cout << "Rectangle 2:" << endl;
    r2.show();

    // Calculating and displaying perimeter and area of rectangles
    cout << "Perimeter of Rectangle 1: " << r1.perimeter() << endl;
    cout << "Area of Rectangle 1: " << r1.area() << endl;

    cout << "Perimeter of Rectangle 2: " << r2.perimeter() << endl;
    cout << "Area of Rectangle 2: " << r2.area() << endl;

    // Checking if rectangles have the same area
    if (r1.sameArea(r2))
        cout << "Both rectangles have the same area." << endl;
    else
        cout << "Rectangles do not have the same area." << endl;

    return 0;
}
