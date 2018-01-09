#include <iostream>
#include "employee.h"
#include "map_template.h"

using namespace std;

int main()
{
    //try
    //{
        typedef unsigned int ID;
        map_template<ID, Employee> Database;
       /* Database.add(761028073, Employee("Jan Kowalski", "salesman", 28));
        Database.add(510212881, Employee("Adam Nowak", "storekeeper", 54));
        Database.add(730505129, Employee("Anna Zaradna", "secretary", 32));
        cout << Database << endl;

        map_template<ID, Employee> NewDatabase=Database;

        Employee* pE;
        pE = NewDatabase.find(510212881);
        pE->position = "salesman";
        pE = NewDatabase.find(761028073);
        pE->age = 29;
        pE = NewDatabase.find(730505129);
        pE->full_name = "Ania Zaradna";
        Database = NewDatabase;
        cout << Database << endl;
    }

	catch(bad_alloc)
	{
		cout << "Out of Memory" << endl;
	}

	return 0;*/
}
