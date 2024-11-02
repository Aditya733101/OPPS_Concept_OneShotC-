#include<bits/stdc++.h>
using namespace std;
// a child class inherits from  more then one parent class
class Animals
// super class
 {
    public:
    void eat()
    {
        cout<<"Animals eat"<<endl;
    }
};
class Cat { // super class
    public:
    void fly()
    {
        cout<<"cat are not fly"<<endl;
    }
};
 class Dog : public Animals , public Cat // sub class
    {
        public:  // public access specifier
        void brek() {
            cout<<"Dogs bark and can eat"<<endl;
        }
        
    };
int main()
{
    Dog myDog;
    myDog.eat(); // Animals eat
    myDog.fly(); // cat are not fly
    myDog.brek(); // Dogs bark and can eat
    return 0;
}