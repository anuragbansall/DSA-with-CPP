#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findErrorNums(vector<int> nums);
int maxArea(vector<int> height);
vector<vector<int>> threeSum(vector<int>& nums) ;

int main(){
    /*  Question1 :
        You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

        You are given an integer array nums representing the data status of this set after the error.

        Find the number that occurs twice and the number that is missing and return them in the form of an array.
        
        Example : 
        Input : nums = [1,2,2,4]
        Output : [2,3]
    */
    vector<int> ans1 = findErrorNums({1,1});
    cout<<ans1[0]<<" "<<ans1[1]<<"\n";

    /*
        Question2 :
        You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

        Find two lines that together with the x-axis form a container, such that the container contains the most water.

        Return the maximum amount of water a container can store.

        Notice that you may not slant the container.

        Input : height = [1,8,6,2,5,4,8,3,7]
        Output : 49
        Explanation : The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (bluesection) the container can contain is 49.
    */
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height)<<"\n";

    /*
        Question3 :
        Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

        Notice that the solution set must not contain duplicate triplets.

        Input : nums = [-1,0,1,2,-1,-4]
        Output : [[-1,-1,2],[-1,0,1]]
        Explanation : nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
        nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
        nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
        
        The distinct triplets are [-1,0,1] and [-1,-1,2].
        Notice that the order of the output and the order of the triplets does not matter.
        
        Input : nums = [0,1,1]
        Output : []
        Explanation : The only possible triplet does not sum up to 0.
        Note - Read up about the in-built sorting of vectors.
    */
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans3 = threeSum(nums);
    for(int i=0; i<ans3.size(); i++){
        for(int j=0; j<ans3[i].size(); j++){
            cout<<ans3[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

vector<int> findErrorNums(vector<int> nums){
    vector<int> ans;
    int n = nums.size()-1;

    vector<bool> isPresent(n+1, false);
    for(int i=0; i<=n; i++){
        if(isPresent[nums[i]]){
            ans.push_back(nums[i]);
        }
        isPresent[nums[i]] = true;
    }

    for(int i=1; i<=isPresent.size(); i++){
        if(!isPresent[i]){
            ans.push_back(i);
            break;
        }
    }

    return ans;
}

int maxArea(vector<int> height){
    int start = 0, end = height.size()-1;
    int maxArea = 0;

    while(start<end){
        int minVal = min(height[start], height[end]);
        int currArea = minVal * (end-start);
        maxArea = max(maxArea, currArea);
        
        if(height[start]<height[end]){
            start++;
        }else{
            end--;
        }
    }

    return maxArea;
}

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size(); i++) {
        // Skip duplicate elements
        if (i > 0 && nums[i] == nums[i - 1]){
            continue;
        };
        
        int start = i + 1, end = nums.size() - 1;
        while (start < end) {
            int sum = nums[i] + nums[start] + nums[end];
            if (sum == 0) {
                ans.push_back({nums[i], nums[start], nums[end]});
                start++;
                end--;
                
                // Skip duplicate elements
                while (start < end && nums[start] == nums[start + 1]){
                    start++;
                }
                while (start < end && nums[end] == nums[end - 1]){
                    end--;
                }
            } else if (sum < 0) {
                start++;
            } else {
                end--;
            }
        }
    }
    
    return ans;
}