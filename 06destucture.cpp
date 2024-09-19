// 1. destructor : - destructor are used to de allocate the memory that is allocated by the object by constructor.
//2. destructor :-destructor are spacial memebers function thst called autometiclly when an object is destroyed that has been created by constructor.
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    Student()
    {
        cout<<"Default constructor called"<<endl;
    }
    ~Student()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    Student s1;
    return 0;
}