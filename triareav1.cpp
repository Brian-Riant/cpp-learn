#include <iostream>

using namespace std;

int main(){
    float area,base,height;
    //prompt 
    cout << "Enter the baselength: ";
    cin >> base;
    cout << "Enter the height: ";
    cin >> height;
    //calculate the area
    area = (0.5*base*height);

    cout << "The area of your tringle is " <<area << " Units squared";

    return 0;
}