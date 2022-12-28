#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("appendfile.txt", ios :: in | ios :: out | ios :: app);
    //create an object of fstream 
    //inside this () we can give filename or file modes here as constructor

    /* ios :: app in this mode even if this file is not created 
    the file will be created wen code is run with this mode

    if this mode is not present then the error msg will pop up indicating no such file present 

    n if file is opened using append mode then the cursor or the file pointer will be pointing
    at the end of the file so therefore if anything is written it will be added to that file 
    without changing the existing content that is what append does
    */

    if (!file.is_open()) //if (!file) also works
    {
        cout<<" error while opening the files"<<endl;
    }else{
        //read and write 
        cout<<"file opened successfully"<<endl;
        cout<<"Writing content to the file "<<endl;

        file<<"Writing the content so that it gets appended to the file where it"<< 
        "last pointer was pointing to "<<endl;
        file.close();
    }

    /*
    -wen object of this fstream class is used it will maintain get n put positions of elements
    -get position specifies were the next character gonna be read wen nxt read operation occurs
    -put position specifies were the next character shud br returned wen nxt write operation occurs
    */

    file.seekg(0);
    //to read an entire file from beginin the cursor needs to pointing at the start point
    //this is used to move pointer to beginin
    cout<<"reading from contents"<<endl;
    string line; //string varaiable
    while (file.good()) //wen there are multiple lines in file
    {
        getline(file,line);//to read a line from file
        //getline("from wer u want to read", "n wer u want to store") i.e getline("source","destination")
        cout<<line<<endl;
    }

    return 0;
}