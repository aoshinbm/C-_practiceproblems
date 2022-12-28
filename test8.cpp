#include<iostream>
using namespace std;

int main(){
    int a=45;
    cout<<"Value of a was: " <<a <<endl;
    a=65;
    cout<<"Value of a is: " <<a <<endl;

/*    char ch='A';
    cout<<"Value of ch was: " <<ch <<endl;
    ch='4';
    cout<<"Value of ch is: " <<ch <<endl;
*/
    //*********Constants in C++
    //usage is where u wont any changes made to certain variables
    const int x=4;
    cout<<"Value of x: " <<x <<endl;
    x=65; //an error will occur as x is constant
    //here value wont change as it has already been initialized as constant variable
    cout<<"Value of x: " <<x <<endl;

    const float y=4.14;
    cout<<"Value of y: " <<y <<endl;
    y=6.58; //an error will occur as y is constant
    //here value wont change as it has already been initialized as constant variable
    cout<<"Value of y: " <<y <<endl;
    return 0;
}