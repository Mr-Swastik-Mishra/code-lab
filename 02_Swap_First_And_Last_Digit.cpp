#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 12345, swapped;
    int last = num % 10;
    int digits = log10(num); 
    int first = num / pow(10, digits);

    swapped = last * pow(10, digits);
    swapped += num % (int)pow(10, digits);
    swapped -= last;
    swapped += first;

    cout << "Original: " << num << " | Swapped: " << swapped << endl;
    return 0;
}