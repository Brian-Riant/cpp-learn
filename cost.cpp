#include <iostream>

using namespace std;

class phone{

    public:
    double cost;
    int slot;
};

int main(){
    phone y6;
    phone y7;

    y6.cost = 100.0;
    y6.slot = 2;

    y7.cost = 200.0;
    y7.slot =2;

    cout<<"Cost of Huawei y6: "<<y6.cost<<endl;
    cout<<"Cost of Huawei y7: "<<y7.cost<<"\n"<<endl;

    cout<<"Number of card slots of Huawei y6: "<<y6.slot<<endl;
    cout<<"Number of card slots of Huawei y7: "<<y7.slot<<endl;

}