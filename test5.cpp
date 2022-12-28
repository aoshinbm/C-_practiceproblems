#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    // << this is called insertion operator
    cout<<"Enter value of number1 : ";
    // >> this is called extraction operator
    cin>>num1;

    cout<<"Enter value of number2 : ";
    cin>>num2;

    cout<<"Sum : "<< num1+num2;
    return 0;
}