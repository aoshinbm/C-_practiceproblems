#include <iostream>
using namespace std;

// class is created
class  Clock {
  private:
    int hand;
    int minute;
    int secs;

  public:
    // default constructor to initialize variable
    Clock() {
        hand=2;
        minute=37;
        secs=45;

      cout << "Clock time : " << endl;
      cout << hand <<" : " <<minute <<" : "<< secs << endl;
    }
};

int main() {
    Clock c;
  return 0;
}
