#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    int admno;
    string sname;
    float eng, math, science;
    float total;

    float ctotal()
    {
        return eng + math + science;
    }

public:
    void Takedata()
    {
        cout << "Enter admission number: ";
        cin >> admno;
        cout << "Enter student name: ";
        cin.ignore(); // to clear the input buffer
        getline(cin, sname);
        
        cout << "Enter marks for English: ";
        cin >> eng;
        cout << "Enter marks for Math: ";
        cin >> math;
        cout << "Enter marks for Science: ";
        cin >> science;

        // Calculate total
        total = ctotal();
    }

    void Showdata()
    {
        cout << "Admission Number: " << admno << endl;
        cout << "Student Name: " << sname << endl;
        cout << "Marks in English: " << eng << endl;
        cout << "Marks in Math: " << math << endl;
        cout << "Marks in Science: " << science << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    student s;

    // Taking data from user
    s.Takedata();

    // Displaying data
    s.Showdata();

    return 0;
}
