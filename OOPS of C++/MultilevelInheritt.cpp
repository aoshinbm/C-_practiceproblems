#include<iostream>
using namespace std;

//Exmple of Multilevel Inheritance
class Grandfather{
    public:
    void work(){
        cout<<"Base class : ";
        cout<<"Grandfather was a farmer"<<endl;
    }
};
class Father : public Grandfather{
/*    public:
    void workMan(){
        cout<<"1st Derived class : ";
        cout<<"Father was an employee"<<endl;
    }
*/
};

class Son : public Father{
/*    public:
    void working(){
        cout<<"2nd Derived class : ";
        cout<<"Son is a bussinessman"<<endl;
    }
*/
};

int main(){
    //object of 2nd derived class is created
    Son inheritings;
//    inheritings.working();
//    inheritings.workMan();
    inheritings.work();
    //function of base class is executed
    return 0;
}