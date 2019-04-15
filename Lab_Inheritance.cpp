
#include"Faculty.h"
#include"Person.h"
#include"Student.h"
using namespace std;
//given main
int main()
{
	Student s1("Ted","Thompson",22,3.91);
	Faculty f1("Richard","Karp",20,2,420);
	s1.PrintStudent();
	cout<<endl;
	s1.printInformation();
	cout<<endl;
	f1.printFaculty();
	cout<<endl;
	return 0;
}