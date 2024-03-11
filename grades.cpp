#include <iostream>

using namespace std;

// fuctions that determines grades

char getGrades(int score)
{
    if (score >= 70)
    {
        return 'A';
    }
    else if (score >= 60)
    {
        return 'B';
    }
    else if (score >= 50)
    {
        return 'C';
    }
    else if (score >= 40)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}

int main() {
    int studentScore;

    //get students score

    cout<<"Enter the student's score: ";
    cin>> studentScore;

    //use the funtion to determine the grade 
    char grade = getGrades(studentScore);

    //print the results of the student 
    cout << "The Student's grade is: " << grade ;

    return 0;


}