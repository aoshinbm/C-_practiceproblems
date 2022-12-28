// C++ program to display element of
// array by passing argument to a
// function with pointer.
#include <iostream>
using namespace std;

void display(int* ptr, int n)
{
	for (int i = 0; i < n; ++i) {
		cout << *(ptr + i) << " ";
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 ,8,6};
	int n = sizeof(arr) / sizeof(int);

	// ptr will store the address of first block of array
	int* ptr = arr;

	// passing argument to a function as pointer.
	display(ptr, n);

	return 0;
}
