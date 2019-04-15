#pragma once
#include<iostream>
#include"Person.h"
using namespace std;
//respective faculty class 
class Faculty: public Person
{
	int course_count;
	int tel_ext_number;
public:
	Faculty(string,string,int,int,int);
	~Faculty();
	void set_course_count(int);
	void set_tel_ext_number(int);
	int get_course_count();
	int get_tel_ext_number();
	void printFaculty();
};
