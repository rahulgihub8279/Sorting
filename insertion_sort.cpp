#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j >= 0; j--) {
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {8, 5, 5, 50, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}