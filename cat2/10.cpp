#include <iostream>

using namespace std;

class complex
{
private:
    float real;
    float imaginary;

public:
    // Function to set the specified value in object
    void set(float r, float i)
    {
        real = r;
        imaginary = i;
    }

    // Function to display complex number object
    void disp()
    {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }

    // Function to sum two complex numbers & return complex number
    complex sum(complex num2)
    {
        complex result;
        result.real = real + num2.real;
        result.imaginary = imaginary + num2.imaginary;
        return result;
    }
};

int main()
{
    // Create three complex number objects
    complex c1, c2, c3;

    // Set the value in the first two objects
    c1.set(2.5, 3.7);
    c2.set(1.8, 4.2);
    
    // Calculate sum and assign it to the third object
    c3 = c1.sum(c2);

    // Display all complex numbers
    cout << "First complex number: ";
    c1.disp();
    cout << "Second complex number: ";
    c2.disp();
    cout << "Sum of the two complex numbers: ";
    c3.disp();

    return 0;
}
