#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target);

int main(){
    /*
        Question : Find if any pair in sorted vector has target sum.
        
        Input : arr = [2, 7, 11, 15], target = 9
        Output : [0, 1] // vector of indices
    */
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairSum(vec, target);
    cout<<ans[0]<<" "<<ans[1]<<"\n";

    return 0;
}

vector<int> pairSum(vector<int> arr, int target){
    vector<int> ansVec;
    int start = 0, end = arr.size()-1;
    while(start<end){
        int currSum = arr[start] + arr[end];
        if(currSum == target){
            ansVec.push_back(start);
            ansVec.push_back(end);
            return ansVec;
        }else if(currSum>target){
            end--;
        }else{
            start++;
        }
    }

    return ansVec; // If ans not found, return empty vector
}