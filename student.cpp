#include<iostream>
using namespace std;
class Student{
  public:
  string name;
  double* cgpaptr;

  Student(string name , double cgpa)
  {
    this->name=name;
    cgpaptr = new double(cgpa);
  }

  //own copy constructor
  Student(Student &obj)
  {
    this->name=obj.name;
    this->cgpaptr=obj.cgpaptr;

  }
  void getinfo(){
    cout<<"name is"<<name<<endl;
    cout<<"cgpa is"<<*cgpaptr<<endl;

  }



};
int main()
{
  Student s1("Muhammad Zeeshan Zaheer",2.65);
  s1.getinfo();
  //shallow copy

  //the values after making the copy constructor are
  cout<<"The values after making the copy constructor are"<<endl;
  Student s2(s1);
  s2.getinfo();

}
