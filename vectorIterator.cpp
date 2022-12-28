#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  // declare iterator
  vector<int>::iterator iter;

  // initialize the iterator with the first element
  iter = num.begin();

  // print the vector element by dereferencing the iterator
  cout << "num[0] = " << *iter <<endl;

  // iterator points to the 3rd element
  iter = num.begin() + 2;
  cout << "num[2] = " << *iter<<endl;

  // iterator points to the last element
  iter = num.end() - 1;
  cout << "num[4] = " << *iter<<endl;

  return 0;
}