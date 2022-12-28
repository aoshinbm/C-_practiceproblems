#include<iostream>
//the above one is the header file which enhance the program functionality
//n some functions are derived using this header file like cout 
/*2 types of header files
1) System Header files:- it comes with compiler
    Eg:#include<iostream>
2) User-defined Header files:- it is written by the programmer
    Eg:#include"this.h"
**n first it will show error 
--> o/p: fatal error: this.h: No such file or directory
 #include"this.h"
**but if "this.h" is created then no error will be shown
 --> the code will get executed
*/
#include"this.h"
using namespace std;

int main(){
    cout<< "Header files example";
    return 0;
}