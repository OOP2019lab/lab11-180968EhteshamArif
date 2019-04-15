#include"Person.h"
#include<iostream>
using namespace std;

//overloaded constructor
Person::Person(string fname,string lname,int age)
{
	first_name=fname;
	last_name=lname;
	this->age=age;
	cout<<"Person(string,string,int)"<<endl;
}
//destructor
Person::~Person()
{
	cout<<"~Person() invoked"<<endl;
}
//setter
void Person::set_first_name(string s)
{
	first_name=s;
}
//setter
void Person::set_last_name(string l)
{
	last_name=l;
}
//getter
string Person::get_first_name()
{
	return first_name;
}
//getter
string Person::get_last_name()
{
	return last_name;
}
//print information function
void Person::printInformation()
{
	cout<<first_name<<" "<<last_name<<" "<<"is"<<" "<<age<<" "<<"years old";
}