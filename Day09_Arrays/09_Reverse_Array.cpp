#include <iostream>
using namespace std;

void reverse_array(int *arr, int n);

int main(){
    // reverse an array with extra space
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    reverse_array(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}

void reverse_array(int *arr, int n){
    int copyArr[n];
    for(int i=0; i<n; i++){
        copyArr[i] = arr[n-i-1];
    }
    for(int i=0; i<n; i++){
        arr[i] = copyArr[i];
    }
}
