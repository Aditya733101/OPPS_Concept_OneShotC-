#include<bits/stdc++.h>
using namespace std;
class Crickets{
  public:
  string name;
  int runs;
  float avg;
  // create object 
  Crickets(string name,int runs,float avg)
  {
   this->name = name;
    this->runs = runs;
   this->avg = avg;
  }
  void print(){
    cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
  }
};
int main()
{
  Crickets c1("mahindra sing ",26000,26.7);
  Crickets c2("rohit sharma",29000,27.9);
  c1.print();
  c2.print();
  return 0;
}