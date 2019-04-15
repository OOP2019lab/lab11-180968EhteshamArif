#include"Student.h"
using namespace std;
//overloaded constructor 
Student::Student(string fname,string lname,int age,float cgpa): 
	Person(fname,lname,age)
{
	
	gpa=cgpa;
	cout<<"Student(string,string,int,float,string) invoked"<<endl;
}
//destructor
Student::~Student()
{
	cout<<"~student() invoked"<<endl;
}
//gettter
float Student::getgpa()
{
	return gpa;
}
//setter
void Student::setgpa(float g)
{
	gpa=g;
}
//print fucntion
void Student::PrintStudent()
{
	Person::printInformation();
	cout<<", his cgpa is "<<gpa;
}