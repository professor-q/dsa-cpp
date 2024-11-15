#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool flag = false;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (!flag) break;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main() {
    int arr[] = {21, 13, 52, 15, 79, 73, 97, 101};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting: ";
    printArray(arr, n);
    bubbleSort(arr, n);
    cout << "After Sorting: ";
    printArray(arr, n);
    return 0;
}
