#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int size){
    int swap=0;
    for(int i = 0; i <size-1; i++){
        for(int j = 0; j <size-i-1; j++){
             
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;
            }
        }
        if(swap==0){
            break;
        }
    }
}
int main()
{
    int arr[]={13,46,24,52,28,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    bubble_sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }


    return 0;
}