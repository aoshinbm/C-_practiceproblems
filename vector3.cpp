#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5 ,9 ,8 ,11 ,25};

  cout << "Element at Index 0: " << num.at(1) << endl;
  cout << "Element at Index 2: " << num.at(2) << endl;
  cout << "Element at Index 4: " << num.at(7);

  return 0;
}