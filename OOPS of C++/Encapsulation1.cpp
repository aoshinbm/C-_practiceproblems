#include <iostream>
using namespace std;

class EncapsulationExample {
private:
	// we declare a as private to hide it from outside
	int a;
    //accessed and manipulated only by using the methods get() and set() within the class
public:
	// set() function to set the value of a
	void set(int x)
	{
		a = x;
	}

	// get() function to return the value of a
	int get()
	{
		return a;
	}
};

/*
the variable and the methods set() as well as get() have binded together 
that is encapsulation.
*/
int main()
{
	EncapsulationExample e1;

	e1.set(10);

	cout<<e1.get();
	return 0;
}
