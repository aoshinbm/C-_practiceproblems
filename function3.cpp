#include <iostream>

using namespace std;

// function created
int add(int a, int b, int c, int d) {
    return (a + b + c + d);
}

int main() {

    int sum;
    
    // calling the function and storing
    // the returned value in sum
    sum = add(100, 78, 584, 65);

    cout << "100 + 78 + 584 + 65= " << sum << endl;

    return 0;
}