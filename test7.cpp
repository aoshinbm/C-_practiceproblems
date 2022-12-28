#include<iostream>
using namespace std;

int c=34;

int main(){
    
    //***********Built-in Datat types
    int a,b,c;
    cout<<"Enter value of a: "<<endl;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"Sum : "<<c <<endl;
    cin>>c;
    //Scope resolution operator(::) is used to access global variable
    cout<<"Global variable c value is " <<::c <<endl;

    //***********Float , double and long double Literals 
    float d=52.6f;
    long double ld = 52.6l;
    cout<<"Value of d is " <<d <<endl <<"Value of ld is " <<ld<<endl;

    cout<<"Size of 52.6 : "<<sizeof(52.6)  <<endl;
    cout<<"Size of 52.6f : "<<sizeof(52.6f)<<endl;
    cout<<"Size of 52.6F : "<<sizeof(52.6F)<<endl;
    cout<<"Size of 52.6l : "<<sizeof(52.6l)<<endl;
    cout<<"Size of 52.6L : "<<sizeof(52.6L)<<endl;

    //**********Refernce Variables
    float vary=455;
    //making va as reference variable which points vary variable
    float & va=vary;
    cout<<vary<<endl;
    cout<<va<<endl;

    //**********Typecating
    //converting one variable which has already some datatype into another datatype
    int x=45;
    float y=45.65;
    cout<<"value of x: " <<x <<endl;
    cout<<"value of x: " <<(float)x <<endl;
    cout<<"value of x: " <<float(x) <<endl;
    cout<<"value of y: " <<(int)y <<endl;
    int z=int(y);
    cout<<"value of z: " <<z <<endl;

    cout<<"The expression is x+y: " <<x+y <<endl;
    cout<<"The expression is x+(int)y:" <<x+(int)y <<endl;
    cout<<"The expression is x+int(y):" <<x+int(y) <<endl;

    return 0;
}