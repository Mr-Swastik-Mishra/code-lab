#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 91, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int minVal = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < minVal) minVal = arr[i];
    }
    cout << "Smallest element: " << minVal << endl;
    return 0;
}