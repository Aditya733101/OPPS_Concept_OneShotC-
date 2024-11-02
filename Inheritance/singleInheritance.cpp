#include<bits/stdc++.h>
using namespace std;
class Car{ // base class for all car objects that  implement or parent class
    public:
    string name;
    int price;
};
class suzuki : public Car{//    derived classes/subclasses/children
    public:
    string model;
};
int main()
{
    suzuki myCar;
    myCar.name = "Suzuki";
    myCar.price = 250000;
    myCar.model = "Swift";
    cout<<"Name: "<<myCar.name<<endl;
    cout<<"Price: "<<myCar.price<<endl;
    cout<<"Model: "<<myCar.model<<endl;
    return 0;
}