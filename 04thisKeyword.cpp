//this keyword  = it can be used to pass current object as a parameter to another method
#include<bits/stdc++.h>
using namespace std;
class Cricter{
  public:
  string name;
  int runs;
  Cricter( string name, int runs)
  {
    this->name = name;// here is used this keyword
    this->runs = runs;
  }

};
void display(Cricter c)

{
  cout<<c.name<<" "<<c.runs<<endl;
}
int main()
{
  Cricter c1("virat kholi",23000);
  Cricter c2("rohit sharma",22000);
  display(c1);
  display(c2);
}