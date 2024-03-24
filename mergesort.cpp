#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int low, int mid, int high) {
    int B[high+ 1];
    int i, j, k;
    i=low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high) {
        if (A[i] < A[j]) {
            B[k] = A[i];
            k++, i++;
        } else {
            B[k] = A[j];
            j++, k++;
        }
    }
    while (i <= mid) {
        B[k] = A[i];
        i++, k++;
    }
    while (j <= high) {
        B[k] = B[j];
        j++, k++;
    }
    for(int i=low;i<=high;i++){
        A[i]=B[i];
    }
}
void merge_sort(int A[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        merge_sort(A,low,mid);
        merge_sort(A,mid+1,high);
        merge(A,low ,mid,high);

    }
}

int main() {
    int A[] = {10, 5, 9, 8, 6, 4, 7, 2};
    int size = sizeof(A) / sizeof(A[0]);
    print_arr(A, size);
    merge_sort(A,0,size-1);
    cout<<"\n";
    print_arr(A, size);

    return 0;
}