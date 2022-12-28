#include <iostream>
using namespace std;

class Dad {
  public:
    int salary=5000;
  public:
    Dad() {
      cout << "Bussiness minded traitzz" << endl;
    }
  public:
    void display(){
      cout << "DAD traitzz" << endl;
    }
};

class Mom {
  public:
    int salary=3000;  
  public:
    Mom() {
      cout << "Kind and Fearless traitzzz" << endl;
    }
  public:
    void display(){
      cout << "MOM traitzz" << endl;
    }
};

class Daughter: public Dad, public Mom {};
//class derived from more than one parent

int main() {
    Daughter daught;
//    aoshu.display();
    /*OUTPUT:-
    ERROR OCCURS WEN BOTH THE BASE CLASS HAS SAME FUNCTION NAME
    IT IS ALSO KNOWN AS METHOD OVERLOADING
    MultipleInheritance.cpp:31:11: error: request for member 'display' is ambiguous
     aoshu.display();
           ^~~~~~~
    MultipleInheritance.cpp:21:10: note: candidates are: void Mom::display()
     void display(){
          ^~~~~~~
    MultipleInheritance.cpp:10:10: note:                 void Dad::display()
     void display(){
          ^~~~~~~
    */
   cout<< daught.Dad::salary<<endl;
   cout<< daught.Mom::salary<<endl;
    return 0;
}