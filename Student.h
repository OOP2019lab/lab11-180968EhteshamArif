#pragma once
#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

//respective student class
class Student: public Person
{
	
	float gpa;
public:
	Student(string,string,int,float);
	~Student();
	float getgpa();
	void setgpa(float g);
	void PrintStudent();
};