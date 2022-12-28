#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    //here we can either constructor parameter or open method

    file.open("aoshin.txt");
    //here even if mode is not mentioned c++ will by default take it as in mode

    if (!file.is_open()) //if (!file) also works
    {
        cout<<" error while opening the files"<<endl;
    }else{
        //if file opened successfully then read from
        cout<<"reading from contents"<<endl;
        string line; //string varaiable
        while (file.good()) //wen there are multiple lines in file
        {
            getline(file,line);//to read a line from file
            //getline("from wer u want to read", "n wer u want to store") i.e getline("source","destination")
            cout<<line<<endl;
        }
        
                    
        file.close();
    }
    cout<<"Succefully inserted into file"<<endl;
    
    
    return 0;
}