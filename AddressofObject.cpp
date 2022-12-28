/**
 * place where an object is stored in the memory is called its address. 
 
 * 3 ways to access the address of an object:
-Using the addressof operator
-Using this operator
-Using ‘&’ operator
-Using pointer
*/
// C++ program to print address of an object Using the addressof operator
#include <iostream>
#include <memory>
using namespace std;

class ABCD {
};

int main()
{
    ABCD object1 ;
    ABCD object2 ;

	cout << "Address of this object 1 is "<< addressof(object1) << endl;
	cout << "Address of this object 2 is "<< addressof(object2) << endl;

	return 0;
}
