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
	friend ostream& operator << (ostream& os, const map_template& mp)
	{
		for(unsigned int i=0; i< mp.vec.size(); i++ )
		{
			os << mp.vec[i].id << " " << mp.vec[i].em << endl;
		}
		return os;
	};
	void add(ID ident, Employee emplo)
	{
		Data temp;
		temp.id=ident;
		temp.em=emplo;
		vec.push_back(temp);
	}
	map_template& operator = (const map_template& mp)	
	{
		unsigned int i;
		for(i=vec.size();i>0;i--)
			vec.pop_back();
		for(i=0;i<mp.vec.size();i++)
		{
			vec.push_back(mp.vec[i]);			
		}
		return *this;
	}
	Employee* find (ID ident)
	{
		for(unsigned int i=0;i< vec.size();i++)
			if(vec[i].id==ident)
				return &(vec[i].em);
		return NULL;
	}
}; 
