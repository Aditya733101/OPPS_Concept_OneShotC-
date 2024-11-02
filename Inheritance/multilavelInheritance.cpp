#include<bits/stdc++.h>
using namespace std;
class Animals
{
public:
    void eat()
    {
        cout<<"Animals eat"<<endl;
    }
};

class Cat : public Animals{
    public:
    void catid()
    {
        cout<<"My name is cat"<<endl;
    }
};
class Dog : public Cat{
    public:
    void dogid()
    {   
        cout<<"My name is dog"<<endl;
    }
};
int main(){
     Cat myCat;
     Dog myDog;
     myCat.eat();
     myCat.catid();
     myDog.eat();
     myDog.dogid();
     return 0;



}