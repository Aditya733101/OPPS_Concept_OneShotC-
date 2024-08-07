#include<bits/stdc++.h>
using namespace std;;
class Car{
  public:
  string name;
  int price;
  int seat;
  string type;
};
void print(Car c){
  cout<<c.name<<" "<<c.price<<" "<<c.seat<<c.type<<endl;
}
void change(Car& c)
{
  c.name = "Sarkar";
   // **here is c.name are change but main scope c1.name are not change beacuse object are pass by value not reference;
  // ** if we pointer(&) use an object parameter the the function pass by reference */
}
int main()
{
  
  Car c1;
  c1.name = "Audi";
  c1.price = 400000;
  c1.seat = 5;
  c1.type = "5 seater";

  print(c1);//print not change c1.name;
  change(c1); // pass the value in the function but value are not change bcz funtion pass by value not pass by reference;
  print(c1);//print not change c1.

  Car c2;
  c2.name = "BMW";
  c2.price = 500000;
  c2.seat = 4;
  c2.type = "4 seater";
  
  Car c3;
  c3.name = "Maruti suzuki";
  c3.price = 60000;
  c3.seat = 7;
  c3.type = "7 seater";
  // print(c1);
  // print(c2);
  // print(c3);
  return 0;
}