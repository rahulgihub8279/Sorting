#include <iostream>
using namespace std;

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i; 
        for (int j = i; j < size; j++) {
    
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i]=temp;
    }
}

int main(){

    int arr[] = {-13 ,65 ,-21 ,76 ,46 ,89 ,45 ,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    selection_sort(arr, size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    

    return 0;
}