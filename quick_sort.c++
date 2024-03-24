#include <bits/stdc++.h>
using namespace std;

void print_array(int A[], int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
}

int partition(int A[], int l, int h) {
    int i = l;
    int j = h;
    int pivot = A[l];
    while (i < j) {
        while (A[i] <= pivot) {
            i++;
        }
        while (A[j] > pivot) {
            j--;
        }
        if (i < j) {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    int temp = A[l];
    A[l]=A[j];
    A[j]= temp;
    
    return j;
}
void quick_sort(int A[], int l, int h) {
    if (l < h) {
        int pivot = partition(A, l, h);
        quick_sort(A, l, pivot - 1);
        quick_sort(A, pivot + 1, h);
    }
}
int main() {
    int A[] = {10, 5, 6, 80, 40, 6, 32, 10, 2};
    int size = sizeof(A) / sizeof(A[0]);
    int l = 0;
    int h = size - 1;
    print_array(A, size);
    quick_sort(A, l, h);
    cout<<endl;
    print_array(A, size);

    return 0;
}