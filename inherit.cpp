#include <iostream>
#include <string> 

using namespace std;

class Teacher
{
public:
    Teacher()
    {
        cout << "Hey guys, I am a teacher" << endl;
    }
    string collegeName = "Beginner book";
};

// This class inherits from the Teacher class
class MathTeacher : public Teacher
{
public:
    MathTeacher()
    {
        cout << "I am a Math teacher" << endl;
    }
    string mainSubject = "Math";
    string name = "Megan";
};

int main()
{
    MathTeacher obj; // Corrected the class name to MathTeacher
    cout << "Name: " << obj.name << endl;
    cout << "College Name: " << obj.collegeName << endl;
    cout << "Main Subject: " << obj.mainSubject << endl;

    return 0;
}
