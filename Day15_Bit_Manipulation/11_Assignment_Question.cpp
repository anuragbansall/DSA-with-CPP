#include <iostream>
#include <vector>
using namespace std;

void clearBitsInRange(int num, int i, int j);
int singleNumber(vector<int> arr);
int xorBeauty(vector<int> nums);

int main(){
    /*
        Question1 : Write a Function to clear the range of bits from i to j in a given number. (i & j are counted backwards from the right end of the number)
        Examples : 
        Input : num=15, i=1, j=3
        Output : 1
        Explanation : 15 in binary form is => 00001111 [i=1st & j=3rd bit underlined]
        After bits are cleared, number will become 00000001 
        
        Input : num=31, i=1, j=3
        Output : 17 
        Note - Think about what type of bitmask is needed.It can also be a combination of 2 numbers.
    */
    clearBitsInRange(31,1,3); // Output : 17

    /*
        Question2 :Given a non-empty array of integers nums,every element appears twice except for one.
        Find that single one.
        You must implement a solution with a linear run time complexity and use only constant extra space.
        Hint - Think XOR.
    */
    cout<<singleNumber({1,1,2,2,3,4,4})<<"\n"; //Output : 3

    /*
        Question3 : You are given a 0-indexed integer array nums.
        The effective value of three indices i, j, and k is defined as ((nums[i]|nums[j]) & nums[k]).
        The xor-beauty of the array is the XORing of the effective values of all the possible triplets of indices(i,j,k) where 0<=i, j, k<n.
        Return the xor-beauty of nums.
    */

    return 0;
}

void clearBitsInRange(int num, int i, int j){
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int bitMask = a|b;
    num = num&bitMask;

    cout<<num<<"\n";
}
int singleNumber(vector<int> arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }

    return ans;
}

int xorBeauty(vector<int> nums){
    int a = 0, b = 0;
    for(int i=0; i<nums.size(); i++){
        a = a | nums[i];
        b = b^nums[i];
    }

    return a&b;
}