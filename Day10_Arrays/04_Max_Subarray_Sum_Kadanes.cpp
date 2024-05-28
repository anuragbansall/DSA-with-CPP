#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

void printMaxSubarraySum(int *arr, int n);

int main(){
    // kadane's algorithm
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(n);
    printMaxSubarraySum(arr,n);

    return 0;
}

void printMaxSubarraySum(int *arr, int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
        cout<<"Max Subarray Sum is "<<maxSum<<"\n";
}