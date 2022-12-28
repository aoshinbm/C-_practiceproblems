#include<iostream>
#include<fstream>
//When dealing with files u must include the header file "fstream" in the code

using namespace std;

//file==> is a container for storing information

/*
Three Classes which r gonna work on files
1)ifstream(input file stream)--> used to read from the file
2)ofstream(output file stream)--> used to write to the file
3)ofstream(output file stream)--> allows to read n write to the file
*/
int main(){
    //first create an object of class "fstream" and give a name
    fstream file;
    //also this object is not associated with any file
    //to associate the object with a file use "open()" method
    file.open("filesample.txt", ios :: in | ios :: out | ios :: trunc);
    //inside open method we need filename and mode of operation
    //file will be created automatically in the same directory
    //if no parameter i.e. modes is given then by default it will be in "in & out mode"
    //ios :: trunc --> is used to create file if not not present in the curent directory 

    /*FILE OPENING MODES in read mode
    - these modes are defined in the iOS base class
    - can access file opening mode using iOS clas
    1)iOS:in mode --> opening file in read mode we can read from file
    2)iOS:out mode --> opening file in out mode we can write to file
    3)iOS:trunk mode --> this is used alongwith out mode n trunk it 
    if any file exist with same name in the folder then contents will be removed from that file
    and a new file will be created   
    4)iOS:app (i.e. append)mode --> opening file in append mode is that wen we write contents wont be lost
    n will be added to the file in the end
    4)iOS:ate or seek mode --> 
    4)iOS:binary mode --> to work with binary file 
    */
    
    if (!file.is_open()) //if (!file) also works
    {
        cout<<" error while opening the files";
    }else{
        //read and write 
        cout<<"file opened successfully";
        file.close();

    }
    
    return 0;
}