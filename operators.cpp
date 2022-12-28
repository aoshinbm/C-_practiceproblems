#include<iostream>
using namespace std;

int main(){
    cout<<"Operators in C++"<<endl;
    //to jump new or next line endl is used 
    cout<<"Operators in "<<endl;
    cout<<"Operators "<<endl;

    cout<<"Following are the types of Operators in C++"<<endl;
    //Arithmetic Operator
    int a=30, b=34;
    cout<<"Arithmetic Operator"<<endl;
    cout<<"Value of a+b: "<< a+b <<endl;
    cout<<"Value of a-b: "<< a-b <<endl;
    cout<<"Value of a*b: "<< a*b <<endl;
    cout<<"Value of a/b: "<< a/b <<endl;
    cout<<"Value of a%b: "<< a%b <<endl;
    cout<<"Value of a++: "<< a++ <<endl; //30+1=31
    cout<<"Value of a--: "<< a-- <<endl; //31-1=30
    cout<<"Value of ++b: "<< ++b <<endl; //1+34=35
    cout<<"Value of --b: "<< --b <<endl; //1-35=34
    cout<<endl;
    //Assignment Operator --> used to assign values to variables
    int x=3, y=4;
    char ch='Q';

    //Comparison Operator
    cout<<"Comparison Operator"<<endl;
    cout<<"Value of a==b: "<< (a==b) <<endl;
    cout<<"Value of a!=b: "<< (a!=b) <<endl;
    cout<<"Value of a>b: "<< (a>b)<<endl;
    cout<<"Value of a<b: "<< (a<b)<<endl;
    cout<<"Value of a>=b: "<< (a>=b) <<endl;
    cout<<"Value of a<=b: "<< (a<=b) <<endl;
    cout<<endl;

    //Logical Operator
    cout<<"Logical Operator"<<endl;
    cout<<"Value of ((a==b) && (a>b)): "<< ((a==b) && (a>b))<<endl;
    cout<<"Value of ((a==b) || (a>b)): "<< ((a==b) || (a>b))<<endl;
    cout<<"Value of (!(a==b)): "<< (!(a==b)) <<endl;
    cout<<endl;
    return 0;
}