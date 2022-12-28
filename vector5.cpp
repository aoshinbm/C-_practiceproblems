#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> prime {2, 3, 5, 7, 11, 13};
  
  cout << "Initial Vector: ";
  for (int i : prime) {
    cout << i << " ";
  }

  // remove the last element
  prime.pop_back();

  cout << "\nUpdated Vector: ";
  for (int i : prime) {
    cout << i << " ";
  }
  
    //**********Vector Function
  cout << "Size of vector"<<prime.size()<<endl;
  cout << "1st element of vector"<<prime.front()<<endl;
  cout << "Last element of vector"<<prime.back()<<endl;
  cout << "Overall Size of vector"<<prime.capacity()<<endl;
  cout << "Check whether vector is empty or not"<<prime.empty()<<endl;

  cout << "Remove all elements of vector"<<prime.clear()<<endl;
  cout << "Check whether vector is empty or not"<<prime.empty()<<endl;
  
  return 0;
}