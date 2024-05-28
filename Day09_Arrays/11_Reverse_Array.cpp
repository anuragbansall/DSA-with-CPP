#include <iostream>
using namespace std;

void reverse_array(int *arr, int n);

int main(){
    // reverse an array without extra space (2 pointer apprach).
    // another method
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
    int start = 0;
    int end = n-1;

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
