#include <iostream>
using namespace std;

bool isArraySorted(int *arr, int n, int i);

int main(){
    int arr1[5] = {1, 2, 3, 4 ,5};
    int arr2[5] = {1, 7, 3, 4 ,5};
    
    cout<<isArraySorted(arr1, 5, 0)<<"\n"; // Output : 1(true)
    cout<<isArraySorted(arr2, 5, 0)<<"\n"; // Output : 0(false)

    return 0;
}

bool isArraySorted(int *arr, int n, int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    
    isArraySorted(arr, n, i+1);
}