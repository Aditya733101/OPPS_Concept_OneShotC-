#include<bits/stdc++.h>
using namespace std;
class Cricet{
    public:
    string name;
    int runs;
    float avg;
    Cricet(string name,int runs,float avg)
    {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
        // this is a constructor which is called when object of class is created
        // it initializes the object's data members
    }
    void display()
    {
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }
};
int main()
{  
    Cricet c1("Mahesh", 26000, 26.7);
    // c1.display();
    // now we create a pointer object
    Cricet* ptr = &c1;
    cout<<(*ptr).avg<<endl;//ptr->avg[those are the same]
    //we change the pointer object in the object avg pointer
    ptr->avg = 983.8;
    ptr->display();
    return 0;
}