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
};
int main()
{  
    Cricet c1("Mahesh", 26000, 26.7);
    Cricet* c2 = new Cricet("Mahesh", 26000, 26.9);
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;
    return 0;

}