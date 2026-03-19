#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "Before: a=" << a << ", b=" << b << endl;

    a = a + b; // a = 30
    b = a - b; // b = 10
    a = a - b; // a = 20

    cout << "After: a=" << a << ", b=" << b << endl;
    return 0;
}
