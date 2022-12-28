#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //*********Manipulators
    int a=2, b=65, c=12546;
    cout<<"Value of a without setw: " <<a <<endl;
    cout<<"Value of b without setw: " <<b <<endl;
    cout<<"Value of c without setw: " <<c <<endl;

    cout<<"Value of a : "<<setw(4) <<a <<endl;
    cout<<"Value of b : "<<setw(4) <<b <<endl;
    cout<<"Value of c : "<<setw(4) <<c <<endl;
    
    //******Operator Precedence
    int x=3,y=5;
    int z= (x*5)+y;
    cout<<z<<endl;
    int zz= ((((x*5)+y)-34)+99);
    cout<<zz<<endl;
    return 0;
}