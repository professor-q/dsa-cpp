#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (right >= left) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (target >= arr[mid]) {
            left = mid + 1; // Target is on the right side
        } else {
            right = mid - 1; // Target is on the left side
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {2, 3, 5, 7, 73, 97, 101};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 97;
    int p = binarySearch(arr, n, target);
    if (p == -1) {
        cout << "Target not found" << endl;
    } else {
        cout << "Target found at index " << p << endl;
    }
    return 0;
}

/* 
    Binary Search is applicable when the array is sorted
    Time Complexity log2(n)
*/
