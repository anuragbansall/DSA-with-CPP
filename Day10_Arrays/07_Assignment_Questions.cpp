#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

bool isRepeated(int *arr, int n);
int binarySearch(int *arr, int n, int target);
int largestProduct(int *nums, int n);

int main(){
    /*
        (EASY)
        Question 1 : Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
        Examples : z
        Input : nums=[1,2,3,4]
        Output : false
        
        Input : nums=[1,1,1,3,3,4,3,2,4,2]
        Output : true
    */
    int nums1[] = {1,1,1,3,3,4,3,2,4,2};
    int nums1N = sizeof(nums1)/sizeof(nums1[0]);
    cout<<isRepeated(nums1, nums1N)<<"\n"; // output : 1(true)

   /*
        (MEDIUM)
        Question 2 : There is an integer array nums sorted in ascending order (with distinct values). Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1<=k<nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
        For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become[4,5,6,7,0,1,2].
        Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or - 1 if it is not in nums.
        You must write an algorithm with O(logn) run time complexity.
        Examples : 
        Input : nums = [4,5,6,7,0,1,2],
        target = 0
        Output : 4
        
        Input : nums = [4,5,6,7,0,1,2],
        target = 3
        Output : -1
   */
    int nums2[] = {4,5,6,7,0,1,2};
    int nums2N = sizeof(nums2)/sizeof(nums2[0]); 
    cout<<binarySearch(nums2, nums2N, 0)<<"\n";

    /*
        (MEDIUM)
        Question3 : Given an integer array nums, find a sub array that has the largest product, and return the product.
        Thet est cases are generated so that the answer will fit in a 32-bit integer.
        Examples : 
        Input : nums = [2,3,-2,4]
        Output : 6
        Explanation : [2, 3] has the largest product 6. 
        
        Input: intervals = nums = [-2,0,-1]
        Output : 0
        Explanation : The result cannot be 2, because [-2,-1] is not a subarray.
    */
    int nums3[] = {2, 3, -2, 4};
    int nums3N = sizeof(nums3)/sizeof(nums3[0]);
    cout<<largestProduct(nums3, nums3N)<<"\n";

    return 0;
}

bool isRepeated(int *arr, int n){
    sort(arr, arr+n);
    for(int i=1; i<n; i++){
       if(arr[i]==arr[i-1]){
        return true;
       }
    }
    return false;
}

int binarySearch(int *arr, int n, int target) {
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            return mid;
        }

        // Check if the left side is sorted
        if (arr[start] <= arr[mid]) {   
            // Check if the target is in the left side
            if (arr[start] <= target && target < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        // Otherwise, the right side must be sorted
        else {
            // Check if the target is in the right side
            if (arr[mid] < target && target <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int largestProduct(int *nums, int n){
    int maxTillNow = nums[0];
    int minTillNow = nums[0];
    int ans = maxTillNow;

    for(int i=1; i<n; i++){
        int curr = nums[i];
        int tempMaxTIllNow = max(maxTillNow*curr, minTillNow*curr);
        maxTillNow = tempMaxTIllNow;

        ans = max(maxTillNow, ans);
    }
    return ans;
}