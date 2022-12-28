#include <iostream>
using namespace std;

// declare a class
class State {
  private:
    string tourism;
    string crops;
    string pollution;

  public:
    // parameterized constructor to initialize variables
    State(string tour, string crop, string pollut){
        tourism=tour;
        crops=crop;
        pollution=pollut;
    }

    void display(){
        cout<<" State tourism : "<<endl;
        cout<<" State crops : "<<endl;
        cout<<" State pollution : "<<endl;
    }
};

int main() {
  // create object and initialize variables
  State s1("Punjab","wheat","moderate");
  State s2("Delhi","none","high");
  State s3("Mumbai","sugarcane","high");

  cout<< s1.display()<<endl;
  cout<< s2.display()<<endl;
  cout<< s3.display()<<endl;

  return 0;
}