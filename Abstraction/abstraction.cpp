#include<bits/stdc++.h>
using namespace std;
class Emplyee{
     string name;
     int balance;
     public:
     Emplyee(string name,int balance){
        this->name = name;
        this->balance = balance;
     }
     void deposit(int balance){
         if(balance>0){
             this->balance += balance;
         }
         else{
             cout<<"Invalid amount"<<endl;
         }
     }
     void diplay()
     {
        cout<<this->name<<" "<<this->balance<<endl;
     }

};
int main()
{
    Emplyee e1("aditya",2000);
    Emplyee e2("shubhodeep",2500);
    e1.deposit(500);
    e2.deposit(1000);
    e1.diplay();
    e2.diplay();

    return 0;
}