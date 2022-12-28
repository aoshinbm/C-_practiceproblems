#include<iostream>
using namespace std;

int main(){
    char symbol;
    float n1,n2;

    cout<<"Enter the symbol of the operator the operation u want:";
    cin>>symbol;

    cout<<"Enter the numbers:";
    cin>>n1>>n2;
    
    switch (symbol)
    {
    case '+': cout<<"Addition";
        cout<<n1 <<" + " <<n2 <<" = ";
        cout<<n1+n2;
        break;
    case '-': cout<<"Subtraction";
        cout<<n1 <<" - " <<n2 <<" = ";
        cout<<n1-n2;
        break;
    case '*': cout<<"Multiplicationtion";
        cout<<n1 <<" * " <<n2 <<" = ";
        cout<<n1*n2;
        break;
    case '/': cout<<"Division";
        cout<<n1 <<" / " <<n2 <<" = ";
        cout<<n1/n2;
        break;
    default:
        break;
    }
    
    return 0;
}