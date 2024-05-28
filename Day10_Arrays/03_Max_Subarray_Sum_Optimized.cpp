#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

void printMaxSubarraySum(int *arr, int n);

int main(){
    // brute force approach - optimized
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(n);
    printMaxSubarraySum(arr,n);

    return 0;
}

void printMaxSubarraySum(int *arr, int n){
    int maxSum = INT_MIN;

    for(int start = 0; start<n; start++){
        int arrSum = 0;
        for(int end = start; end<n; end++){
            arrSum += arr[end];
            maxSum = max(maxSum, arrSum);
        }
    }
    
    cout<<"Max Subarray Sum is "<<maxSum<<"\n";
}