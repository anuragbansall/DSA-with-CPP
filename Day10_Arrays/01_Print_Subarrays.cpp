#include <iostream>
using namespace std;

void printSubarrays(int *arr, int n);

int main(){
    // subarray is continuous part of array
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    printSubarrays(arr,n);

    return 0;
}

void printSubarrays(int *arr, int n){
    for(int start = 0; start<n; start++){
        for(int end = start; end<n; end++){
            for(int i = start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<", ";
        }
        cout<<"\n";
    }   
}