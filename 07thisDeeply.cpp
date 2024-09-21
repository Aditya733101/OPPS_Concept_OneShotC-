#include<bits/stdc++.h>
using namespace std;
class Cricetable
{
    public:  // Access specifier  = public : members of class are accessible outside the class.
    string name;
    int runs;
    float avg;
    Cricetable(string name,int runs,float avg)
    {
        this->name = name;
        this->runs = runs;
       this->avg = avg;
    }
    void diply()
    {
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }
    int cricetMatch()
    {
        return runs/avg;
    }
 };
int main()

{
     Cricetable c1("Aditya sarkar", 25000, 96.3);
     Cricetable c2("prittam mridha",26000,82.2);
    c1.diply();
    c2.diply();
    cout << "Match winning ratio " << c1.cricetMatch()<< endl;
    return 0;
}