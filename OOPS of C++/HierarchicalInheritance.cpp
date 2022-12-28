#include <iostream>
using namespace std;

// base class
class Book {
   public:
    void info() {
        cout << "Books...." << endl;
    }
};

// derived class 1
class HarryPotter: public Book {
   public:
    void author() {
        cout << "J K Rowling" << endl;
    }
};

// derived class 2
class TwoStates : public Book {
   public:
    void story() {
        cout << "2 state marriage " << endl;
    }
};

//Here, both child classes are derived from the parent class
//therefore both the child classes can access parent function 

int main() {
    // Create object of HarryPotter class
    HarryPotter book;
    cout << "Book Class:" << endl;
    book.info();    // Parent Class function
    book.author();

    // Create object of TwoStates class
    TwoStates book2;
    cout << "TwoStates Class:" << endl;
    book2.info(); // Parent Class function
    book2.story();

    return 0;
}
