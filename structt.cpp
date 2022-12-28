#include<iostream>
#include<string>
using namespace std;

int main(){

    struct a
    {
        int id;
        string name;
    };

    a.id=1;
    a.name="Aoshin";
    cout<< "Emp a \nID:"a.id <<"NAME: " <<a.name ;   
}