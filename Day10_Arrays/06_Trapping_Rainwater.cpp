#include <iostream>
#include <climits>
using namespace std;

int trappingRainwater(int *heights, int n);

int main(){
    int heights[] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(heights[0]);

    trappingRainwater(heights, n);

    return 0;
}

int trappingRainwater(int *heights, int n){
    int leftMax[20000];
    int rightMax[20000];

    // left max
    leftMax[0] = heights[0];
    for(int i=1; i<n; i++){
        leftMax[i] = max(heights[i-1], leftMax[i-1]);
    }
    // right max
    rightMax[n-1] = heights[n-1];
    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(heights[i+1], rightMax[i+1]);
    }

    int waterTrapped = 0;
    for(int i=0; i<n; i++){
        int minVal = min(leftMax[i], rightMax[i]);
        int currWaterTrapped = minVal - heights[i];
        if(currWaterTrapped<0){
            currWaterTrapped = 0;
        }
        waterTrapped += currWaterTrapped;
    }
    cout<<"Water Trapped = "<<waterTrapped<<"\n";
    return waterTrapped;
}