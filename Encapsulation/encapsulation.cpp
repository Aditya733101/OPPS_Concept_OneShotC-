#include<bits/stdc++.h>
using namespace std;
class Car{

    private:

 string name;
 int price;

 public:
 Car(string n, int p )
    {
        this->name = n;
        this->price = p;
    }
    void carpriceIncrise(int price)
    {
        if(price>2000 && price<10000)
        {
            this->price+=price;
        }
        else{
            cout<<"Invalid price"<<endl;
        }
    }
    void carpriceDecrease(int price)
    {
       if(price>0 && price<200)
        {
            this->price-=price;
        }
        else{
            cout<<"Invalid price"<<endl;
        }
    }
    void display()
    {
        cout<<this->name<<" "<<this->price<<endl;
    }

};
int main()
{
    Car c1("maruti",2000);
    Car c2("maruti",4000);
    c1.carpriceIncrise(5000);
    c2.carpriceDecrease(100);
    c1.display();
    c2.display();


}