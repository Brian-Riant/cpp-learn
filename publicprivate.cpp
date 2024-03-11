#include <iostream>

using namespace std;

class rectangle
{

private:
    double length;
    double width;

public:
    rectangle(double l, double w) : length(l), width(w) {} 
    double area(){
        return length * width;
    }
};

int main(){
    
    rectangle rect(5.0,3.0);
    cout << "Area of the rectangle is: "<<rect.area()<<endl;
}