#include <iostream>
#include <climits>
using namespace std;

void countingSort(int *arr, int n);

int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array Before Counting Sort : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    countingSort(arr, n);

    cout<<"Array After Counting Sort : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}

void countingSort(int *arr, int n){
    int freq[100000];
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for(int i=0; i<n; i++){
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i]>0){
            arr[j] = i;
            j++;
            freq[i]--;
        }
    }
}