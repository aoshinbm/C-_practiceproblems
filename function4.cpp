#include <iostream>
using namespace std;

// function prototype is declared before main()
int add(int, int);

int main() {
    int sum;

    // calling the function and storing
    // the returned value in sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0;
}

// using function definition after main() function
// function definition
int add(int a, int b) {
    return (a + b);
}