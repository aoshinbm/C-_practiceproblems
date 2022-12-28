using namespace std;
#include<iostream>
#include<fstream>
/*
The useful clases for working with files in C++ are:-
1)fstreambase (where f=files)
2)ifstream (where i is for input) --> dervied from fstreambase
3)ofstream (where o is for output) --> dervied from fstreambase


In order to work with files in C++, u vil have to open it.
Primarily there are 2 ways to open a file:
1) Using the constructor
2)Using the member function open() of the class

*/
int main(){
//This is to show how to wite in file 

    string str="Aoshin file operation";
    //opening files using constructor and writing it
    //ofstream is a class which is in fstreambase
    //created an ofstream object which is used to write in samplefile.txt  
    ofstream out("samplefile.txt"); 
    //write operation
    out<<str; 

//This is to show how to read from the file 

    return 0;
}