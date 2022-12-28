#include<iostream>
using namespace std;

//global variable
int g=15;
//function created
void sum(){
    //local variable
    int i;
    cout<< "\nGlobal variable g:" <<g;
}
int main(){
    int g=50;
    g=99;
    int a= 10;
    int b=20;
    int x=15,y=35;
    float pi=3.14;
    char ch= 'A';
    bool bl=true;
    cout<<"Datatypes tutorial";
    cout<< "\nValue of a: "<<a;
    cout<< "\nValue of b: "<<b;

    cout<< "\nValue of x: "<<x;
    cout<< "\nValue of y: "<<y;

    cout<< "\nValue of pi: "<<pi;

    cout<< "\nValue of character ch: "<<ch;

    //calling function
    sum();

    //printing global variable
    //cout<< "\nGlobal variable g:" <<g;

    //here local variable gets the first priority
    //cout<< "\nGlobal variable g:" <<g;
    
    //updated value of lacal variable will be printed
    cout<< "\nGlobal variable g:" <<g << "\n" <<bl;

    return 0;

}