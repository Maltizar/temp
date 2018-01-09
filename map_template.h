#include <iostream>
#include <vector>

using namespace std;

template <class ID, class Employee>

class map_template
{
	private:

	typedef struct
	{
		ID id;
		Employee em;
	}Data;
	vector<Data> vec;

	public:
	friend ostream& operator << (ostream&, map_template);
	void add(ID ident, Employee emplo)
	{
		Data temp;
		temp.id=ident;
		temp.em=emplo;
		vec.push_back(temp);
	}
}; 
ostream& operator << (ostream& os, map_template mp)
{
};
