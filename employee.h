#include <iostream>
#include <string>

using namespace std;

class Employee
{
	public:
		string full_name;
		string position;
		int age;
	friend ostream& operator << (ostream&, Employee);
	Employee(string fn="NULL", string po="NULL", int ag=0)
	{
		full_name=fn;
		position=po;
		age=ag;
	}
	~Employee()
	{
	}
};
ostream& operator << (ostream& os, Employee em)
{
	os << em.full_name <<" "<< em.position << " " << em.age;
	return os;
};
