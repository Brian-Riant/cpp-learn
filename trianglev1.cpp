#include <iostream>
#include <cmath>

using namespace std;

class Triangle{
    private:
    double s1,s2,s3,h;

    public:
    //setter
    void setTriangle(double side1,double side2, double side3,double height){
        s1=side1;
        s2=side2;
        s3=side3;
        h=height;
    }
    //getter function to calculate the height
    double getArea(){
        //using heron's formula to calculate the area
        double s = (side1 + side2 + side3)/2;
        return sqrt(s*(s-side1)*(s-side2)*(s-side3));
    }
    
};

int main(){
    double side1 =3, side2 =4, side3 =5;


    Triangle myTriangle(side1,side2,side3);

    cout <<"Area of the triangle is: " <<myTriangle.getArea() << endl;
}