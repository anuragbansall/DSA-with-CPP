#include <iostream>
using namespace std;

void reverse_array(int *arr, int n);

int main(){
    // reverse an array without extra space
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
    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
