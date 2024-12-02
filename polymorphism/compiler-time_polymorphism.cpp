#include<bits/stdc++.h>
using namespace std;
class CompilersName{
    public:
    void show(int a,int b)
    {
        cout<<a+b<<endl;
    }
    void show(int b, int c, int a)
    {
        cout<<b+c+a<<endl;
    }
};
int main()
{
    CompilersName c1;
    c1.show(5,2);
    c1.show(2,3,4);
    return 0;
}
// compile time polymorphism : -
// -> compile time polymorphism achived from function overloading polymorphism;