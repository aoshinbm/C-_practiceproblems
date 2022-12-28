#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5 ,19 ,8 ,11 ,25};

  cout << "Initial Vector: ";

  for (const int& i : num) {
    cout << i << "  ";
  }

  // change elements at indexes 1 and 4
  num.at(3) = 9;
  num.at(6) = 7;

  cout << "\nUpdated Vector: ";

  for (const int& i : num) {
    cout << i << "  ";
  }

  return 0;
}