#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 91, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxVal = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
    }
    cout << "Largest element: " << maxVal << endl;
    return 0;
}