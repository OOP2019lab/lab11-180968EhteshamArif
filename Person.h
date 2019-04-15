#pragma once
#include<string>
using namespace std;

class Person
{
	string first_name;
	string last_name;
protected:
	int age;
public:
	Person(string,string,int);
	~Person();
	void set_first_name(string);
	void set_last_name(string);
	string get_first_name();
	string get_last_name();
	void printInformation();
};
