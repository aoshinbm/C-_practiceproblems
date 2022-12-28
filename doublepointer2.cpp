#include <bits/stdc++.h>
using namespace std;

// pointer to pointer
int main()
{
int v = 289;
	
// Pointer is used to store the address of variable
int* ptr1;

// double pointer is used to store the address of pointer1
int** ptr2;

// single pointer==>storing address of variable in pointer1
ptr1 = &v;

// Storing address of pointer1
// in pointer2
// pointer-to-pointer / double pointers==>storing address of variable in pointer1
ptr2 = &ptr1;

cout << "Value of variable v :- " <<v<<endl;
cout << "Value of variable v using single pointer :- " <<*ptr1<<endl;
cout << "Value of variable v using double pointer :- " <<**ptr2<<endl;

//size of the variable of the double-pointer and the size of the normal pointer variable is always equal
/*
The size of a pointer is not fixed in the C++ programming language and 
it totally depends on on the type of machine which is being used i.e factors like 
CPU architecture and OS used 
so for a 64-bit Operating System a size of 8 bytes memory and 
for a 32-bit Operating system a size of 4 bytes memory is assigned.
*/
cout << "size of normal pointer *ptr1:- " <<sizeof(*ptr1)<<endl;
cout << "size of double pointer **ptr2:- " <<sizeof(**ptr2)<<endl;
return 0;
}
