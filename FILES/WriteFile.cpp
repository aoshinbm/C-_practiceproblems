#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("aoshin.txt");
    //here even if we didnt mention the mode it is bydefault out and trunc mode
    // therefore if cout r changed everytime changes will be printed n previous will be lost
    if (!file.is_open()) //if (!file) also works
    {
        cout<<"unable to open the files"<<endl;
    }else{
        //write 
        file<<"File operation beginss"<<endl;
        //using object of ofstream alongwith stream insertion operator to insert contents into file
        file<<"Heloo folks lets begin"<<endl;
        file.close();
    }
    cout<<"Succefully inserted into file"<<endl;
    
    return 0;
}