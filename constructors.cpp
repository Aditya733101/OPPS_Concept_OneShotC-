#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
  string name;
  int rollNo;
  float gpa;
  Student(){
    //** * default constructor : when  constructor does not have any parameters then its call default constructors
  }   
  Student(string n,int r,float g)//parameterized constructor : A constructor which has a specific number of parameters is called parameterized constructor;
  {
    name = n;
    rollNo = r;
    gpa = g;
  }
  Student(int r,float g,string n)//parameterized constructor : A constructor which has a specific number of parameters is called parameterized constructor;
  {
    name = n;
    rollNo = r;
    gpa = g;
  }

  
};
int main()
{
  Student s1;// default constructor
  s1.name = "Aditya sarkar";
  s1.rollNo = 1;
  s1.gpa = 7.3;
  Student s2("kiran sarkar",2,9.8);//parameterized constructor
  // s2.name = "bittu";
  Student s3(4,5.4,"bapi roy");//different parameter
  Student s4(s1);// copy parameter : A constructor that creates a new object as a copy of an existing object.
  s4.rollNo = 9; // deep copy

  cout<<s1.name<<" "<<s1.rollNo<<" "<<s1.gpa<<endl;
  cout<<s2.name<<" "<<s2.rollNo<<" "<<s2.gpa<<endl;
  cout<<s3.name<<" "<<s3.rollNo<<" "<<s3.gpa<<endl;
  cout<<s4.name<<" "<<s4.rollNo<<" "<<s4.gpa<<endl;
}