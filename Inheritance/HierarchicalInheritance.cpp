#include<bits/stdc++.h>
using namespace std;
//multiple child class inherits from one parent class
class Vehicals{
    public:
    void move()
    {
        cout<<"Vehicles are moving"<<endl;
    }
};
class Car : public Vehicals{
    public:
    void carid(){
        cout<<"my name is car "<<endl;
    }
};
class Bike : public Vehicals{
    public:
    void bikeid(){
        cout<<"my name is bike "<<endl;
    }
};
int main()
{
    Car mycar;
    Bike mybike;
    mycar.move();
    mycar.carid();
    mybike.move();
    mybike.bikeid();
    return 0;
}