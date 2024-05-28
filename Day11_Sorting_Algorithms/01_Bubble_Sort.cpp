#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n);

int main(){
    int arr[] = {5,4,3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array Before Bubble Sort : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    bubbleSort(arr, n);

    cout<<"Array After Bubble Sort : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}

void bubbleSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            // Already Sorted
            return;
        }
    }
}