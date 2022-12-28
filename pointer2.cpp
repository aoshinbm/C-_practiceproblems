#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 25, b = 55;
	cout << "values of a and b before swapping: " << a	<< " " << b << endl;
	swap(&a, &b); // passing address of a and b
	cout << "values of a and b after swapping: " << a << " "<< b << endl;
	return 0;
}
