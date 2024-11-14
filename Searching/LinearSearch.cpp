#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {2, 3, 5, 7, 73, 97, 101};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 73;
    int p = linearSearch(arr, n, target);
    if (p == -1) {
        cout << "Target not found" << endl;
    } else {
        cout << "Target found at index " << p << endl;
    }
    return 0;
}

/* 
    Linear Search is used when the array is not sorted
    Time Complexity O(n)
*/
