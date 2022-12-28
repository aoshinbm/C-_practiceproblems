#include <iostream>
using namespace std;

//a class is created
//class--> blueprint for the object
class Room {
//variables of the class
   public:
    double length;
    double breadth;
    double height;

    //function1 declared
    double calculateArea() {
        return length * breadth;
    }

    //function2 declared
    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    //Object creation syntax:- classname objectname;
    //object of class is created
    Room room;

    //values are assigned to the variables of the class
    room.length = 100.5;
    room.breadth = 530.8;
    room.height = 190.2;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room.calculateArea() << endl;
    cout << "Volume of Room =  " << room.calculateVolume() << endl;

    return 0;
}