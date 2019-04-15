#include"Faculty.h"
using namespace std;
//overloaded constructor
Faculty::Faculty(string fname,string lname,int age,int course,int tel):Person(fname,lname,age)
{
	course_count=course;
	tel_ext_number=tel;
	cout<<"Faculty(string,string,int,int,int) invoked "<<endl;
}
//destructor
Faculty::~Faculty()
{
	cout<<"~Faculty() invoked"<<endl;
}
//setter
void Faculty::set_course_count(int s)
{
	course_count=s;
}
//setter
void Faculty::set_tel_ext_number(int t)
{
	tel_ext_number=t;
}
//getter
int Faculty::get_course_count()
{
	return course_count;
}
//getter
int Faculty::get_tel_ext_number()
{
	return tel_ext_number;
}
//print function
void Faculty::printFaculty()
{
	cout<<"Faculty Member name :";
	Person::printInformation();
	cout<<" Number of courses "<<course_count<<" "<<"Ext :"<<tel_ext_number;
}