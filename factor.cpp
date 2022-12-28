#include<iostream>
using namespace std;

int main(){

    int n,i;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Factors of "<<n <<" :";
    for ( i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout<<" " <<i;
        }
        
    }
    
}