#include <iostream>

using namespace std;

class Person{
    private:
    string name;
    int age;
    string country;

    public:
    void setPerson(string fullname, int totalage, string homecountry) {
        name = fullname;
        age = totalage;
        country = homecountry;
    }

    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getCountry() {
        return country;
    }
};

int main(){

    int age;
    string name, country;

    cout<<"Enter your fullname: "<<endl;
    cin>>name;

    cout<<"Enter your Age: "<<endl;
    cin>>age;

    cout<<"Enter the name of your country: "<<endl;
    cin>>country;


    Person p1;
    p1.setPerson(name, age, country);
    cout << p1.getName() << endl;
    cout << p1.getAge() << endl;
    cout << p1.getCountry() << endl;

    // Person p2;
    // p2.setPerson("Stephane", 20, "USA");
    // cout << p2.getName() << endl;
    // cout << p2.getAge() << endl;
    // cout << p2.getCountry() << endl;

    // Person p3;
    // p3.setPerson("Elizabeth", 19, "USA");
    // cout <<"Name: "<< p3.getName() << endl;
    // cout <<"Age: "<<p3.getAge() << endl;
    // cout << p3.getCountry() << endl;
}