#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 91, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first = INT_MIN, second = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    cout << "Second Largest: " << second << endl;
    return 0;
}