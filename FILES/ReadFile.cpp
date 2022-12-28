#include<iostream>
using namespace std;

int main(){
    //how to read an entire line in C++

    //here we want to read a string value and store it in data 
//   string data;
//   cin>>data;
//   cout<<data;
    /*
    i/p:-hello i am aoshin
    OUTPUT:-
    hello
    --Here only hello is printed bcuz "cin" separates input wen it encounters space/newline/tab
    */

  //  cin>>data;
  //  cout<<data;
    /*
    input:- hello i am aoshin
    OUTPUT:- helloi
    --here hello and i both are printed bcuz as the whole input has entered into the buffer
    and "hello" is printed bcuz of the 1st cout and "i" is printed bcuz of 2nd cout
    */

   /*The above example is used to prove the point that using "cin" we cant read an entire line
   So an alternative solution to read an entire line
   we can use "getline()" function
   */
    string data;    
    getline(cin,data);
    cout<<data;

    /*
    Here u need to define from wer u want to read the line
    n wer u want to store the data
    */
    return 0;
}