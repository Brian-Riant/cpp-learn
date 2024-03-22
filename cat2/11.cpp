#include <iostream>
#include <cmath>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    // Function to give value to object
    void set(int ft, float in)
    {
        feet = ft;
        inches = in;
    }

    // Function to display distance in feet and inches
    void disp()
    {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }

    // Function to sum two distances & return distance
    Distance add(Distance d2)
    {
        Distance result;
        result.feet = feet + d2.feet;
        result.inches = inches + d2.inches;

        // Check if the sum of inches exceeds 12
        if (result.inches >= 12.0)
        {
            result.feet += static_cast<int>(result.inches / 12);
            result.inches = fmod(result.inches, 12.0); // Use fmod to get the remainder
        }

        return result;
    }
};

int main()
{
    // Create three Distance objects
    Distance d1, d2, d3;

    // Set the value in the first two objects
    d1.set(3, 6.5);
    d2.set(2, 10.3);

    // Calculate sum and assign it to the third object
    d3 = d1.add(d2);

    // Display all distances
    cout << "First distance: ";
    d1.disp();
    cout << "Second distance: ";
    d2.disp();
    cout << "Sum of the two distances: ";
    d3.disp();

    return 0;
}
