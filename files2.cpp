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
//This is to show how to read from the file 

    string str2;
    //opening files using constructor and reading it
    //ifstream is a class which is in fstreambase
    //created an ifstream object which is used to read from samplefile2.txt  
    ifstream in("samplefile2.txt");    //read operation
//    in>>str2; 
    //here using "in" only first is printed not the entire sentence
    //therefore to read entire sentence use getline() function
    getline(in, str2);
    getline(in, str2);
    //the number of time we call getline() we vil get next line sentence that many times
    cout<<str2; 

    return 0;
}