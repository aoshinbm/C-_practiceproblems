#include<iostream>
using namespace std;

int main(){
    int age,agee;
    cout<< "Enter age:";
    cin>>age;

    if (age<18)
    {
        cout<< "No going out";    
    }else if (age==18)
    {
        cout<< "YUP u are allowed to go to party......";
    }
    else
    {
        cout<< "Letzz PARTYYYY.........";
    }

    return 0;
}