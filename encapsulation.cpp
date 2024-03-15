//to access privte attribute use public "get" and "set" methods;

#include <iostream>

using namespace std;

class Employee {
    private:
    //pricvate attribute
    int salary; 

    public:
    //setter function
    void setSalary(int fulltime,int overtime){
        salary = fulltime + salary;
    }
    //getter function
    int getSalary(){
        return salary;
    }
};

int main(){
    Employee myObj;
    int Fulltime, overtime;
    


    myObj.setSalary(5000000);
    cout<<myObj.getSalary();
    return 0;
}