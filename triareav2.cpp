#include <iostream>
#include <cmath>
 
using namespace std;

//a  function that calculates the area of the triangle
double calculateArea(double a, double b, double c){
    //to calculate the semi-perimeter
    double s = (a+b+c) / 2;

    //to calculate the area using Heron's  forula
    double area = sqrt(s* (s-a)*(s-b)*(s-c));

    return area;
}

int main(){
    double side1, side2, side3;

    //prompt for the lengths of the sides input 
    cout<< "Enter the lengths of the sides of your triangle:\n";
    cin >> side1 >> side2 >> side3;

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1){
        //then calculate and print the output 
        double area = calculateArea(side1, side2, side3);
        cout << "The area of the triangle is " <<area << " Units squared" << endl;
    }else {
        cout << "Invalid input the sides length don't form  a  triangle\nplease try again" << endl;
    }

    return 0;
}