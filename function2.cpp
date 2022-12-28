#include <iostream>
using namespace std;

//function with parameters
void display(int num, float fl, string name) {
    cout << "Number : " << num<<endl;
    cout << "Double number : " <<fl <<endl;
    cout << "String Name : " <<name<<endl;
}

int main() {
     
     int num1 = 52;
     double num2 = 2555.5;
     string namin="Aoshin";

    // calling the function
    display(num1, num2, namin );

    return 0;
}