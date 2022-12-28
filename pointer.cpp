    //*********POINTER
    /*
    Pointer==> is a datatype which holds the address of other datatypes
    Pointer==> is a variable that is used to store the memory address of other variables
    &==> Address of operator
    *==> Dereference operator
    */
#include <iostream>
using namespace std;

void functionn(int* y) //passing pointers to functions 
{ 
    *y = 5; 
}

int main()
{
	int x = 9;
	cout << "value of x before calling fun: " << x << endl;
    // wen calling function we will pass the address of the variable 
	functionn(&x);

	cout << "value of x after calling fun: " << x << endl;
	return 0;
}
