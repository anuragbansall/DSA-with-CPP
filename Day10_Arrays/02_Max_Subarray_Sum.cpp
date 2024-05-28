#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

void printMaxSubarraySum(int *arr, int n);

int main(){
    // brute force approach
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(n);
    printMaxSubarraySum(arr,n);

    return 0;
}

void printMaxSubarraySum(int *arr, int n){
    int maxSum = INT_MIN;

    for(int start = 0; start<n; start++){
        for(int end = start; end<n; end++){
            int arrSum = 0;
            for(int i=start; i<=end; i++){
                arrSum += arr[i];
            }
            maxSum = max(maxSum, arrSum);
        }
    }
    
    cout<<"Max Subarray Sum is "<<maxSum<<"\n";
}