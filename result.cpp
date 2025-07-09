#include<iostream>
using namespace std;
class Student
{
public:
int rollno;
string name;
void setData(int r,string n)
{
rollno=r;
name=n;
}
};

class test:public Student
{
public:
int m1,m2,m3,m4,m5;
void setMarks()
{
  cout<<"Enter marks for OOPS"<<endl;
  cin>>m1;
  cout<<"Enter marks for WAD"<<endl;
  cin>>m2;
  cout<<"Enter marks for NSM"<<endl;
  cin>>m3;
  cout<<"Enter marks for Fundamentals of MP & MC"<<endl;
  cin>>m4;
  cout<<"Enter marks for GIT"<<endl;
  cin>>m5;
  }
};

class sports
{
public:
int sc;
void setScore()
{
cout<<"enter the score for sports"<<endl;
cin>>sc;
}
};
  class Result:public test, public sports
  {
  public:
  int total;
  float avg;
  void printResult()
  {
  total=m1+m2+m3+m4+m5+sc;
  avg=total/6;
  cout<<"Student name"<<name<<endl;
  cout<<"student rollno"<<rollno<<endl;
 
 cout<<"marks of OOPS"<<m1<<endl;
  cout<<"marks of WAD"<<m2<<endl;
  cout<<"marks of NSM"<<m3<<endl;
  cout<<"marks of Fundamentals of MP & MC"<<m4<<endl;
  cout<<"marks of GIT"<<m5<<endl;
  cout<<"total score"<<sc<<endl;
  cout<<"Student total Marks"<<total<<endl;
  cout<<"student average marks"<<avg<<endl;
  }
  };
  
  int main()
  {
  Result r;
  r.setData(1,"Vaishnavi");
  r.setMarks();
  r.setScore();
  cout<<"**********result of 2023-24************"<<endl;
 
  r.printResult();
  return 0;
  
  }

