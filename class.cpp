#include <iostream>

using namespace std;

class franchise{

    public: //access specifiers

    void kfc(){
        cout<<"We have the best chicken"<<endl;
    }


    void burgerking(){
        cout<<"We have the best burgarkings"<<endl;
    }
};

int main(){
    franchise fran;
    fran.kfc();
    fran.burgerking();
    return 0;
}