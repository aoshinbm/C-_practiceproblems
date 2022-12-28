#include <bits/stdc++.h>
using namespace std;

// pointer to pointer
int main()
{
int v = 169;
	
// Pointer is used to store the address of variable
int* ptr1;

// double pointer is used to store the address of pointer1
int** ptr2;

// single pointer==>storing address of variable in pointer1
ptr1 = &v;

// pointer-to-pointer / double pointers==>storing address of variable in pointer1
ptr2 = &ptr1;

cout << "Value of variable v :- " <<v<<endl;
cout << "Value of variable v using single pointer :- " <<*ptr1<<endl;
cout << "Value of variable v using double pointer :- " <<**ptr2<<endl;
return 0;
}
