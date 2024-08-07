#include<bits/stdc++.h>
using namespace std;
class Student {//student is a new data type
public:
  string name;
  int rollNo;
  float cgpa;
};
void print(Student s)
{
  cout <<s.name<<" "<<s.rollNo<<" "<<s.cgpa<<endl;
}
int main()
{
  Student s1;
  s1.name = "Aditya Sarkar";
  s1.rollNo = 2;
  s1.cgpa = 6.2;
  Student s2;
  s2.name = "kajol biswas";
  s2.rollNo = 1;
  s2.cgpa = 6.5;
  print(s1);
  print(s2);
}