#include <iostream>
#include <string>

using namespace std;

class Employee
{
	private:
		string full_name;
		string position;
		int age;
	public:
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
