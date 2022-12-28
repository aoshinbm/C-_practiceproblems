#include<iostream>
using namespace std;

//Base class
class Employee{
    public:
    int id;
    string name;
    float salary;

    public:
        Employee(int Id, string Name ){
            id = Id;
            name = Name;
            salary = 250;
        }
        //default constructor
        //when derived class is created then automatically base class constructor is called
        //so when derived class is called if no default constructor then error will occur
        Employee(){}
};

//Derived class
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    memebers/methods/etc......
}

NOTES:-
-{{visibility-mode}} --> it can be either public or private
-so if its public then public members base class become PUBLIC members of derived class
-n if its private then public members base class become PRIVATE members of derived class
-already private members of BASE class wont be inherited 
i.e. PRIVATE members of BASE class will never become members of DERIVED class
-default visibility-mode is PRIVATE....
*/
//creating a programmer class derived from employee base class
class Programmer : public Employee{
    public:
    int languageCode;
    public:
        Programmer(int progId){
            id = progId;
            languageCode = 9;
        }
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
    Employee aoshin(1,"Aoshin"); 
    Employee rita(2,"Rita");
    cout<< aoshin.salary <<endl;
    cout<< rita.salary  <<endl;

    Programmer skill(100);
    cout<< skill.languageCode<<endl;
    cout<< skill.id<<endl;
    skill.getData();
    return 0;
}