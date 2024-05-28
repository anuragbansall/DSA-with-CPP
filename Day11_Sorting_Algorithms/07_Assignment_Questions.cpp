#include <iostream>
#include <climits>
using namespace std;

void bubbleSort(int *arr, int n);
void selectionSort(int *arr, int n);
void insertionSort(int *arr, int n);
void countingSort(int *arr, int n);

int main(){
    /*
        Question 1 : Use the following sorting algorithms to sort an array in DESCENDING order : 
        a. BubbleSort
        b. SelectionSort
        c. InsertionSort
        d. CountingSort
        You can use this array as an example : [3,6,2,1,8,7,4,5,3,1]
    */

    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    // bubbleSort(arr, n);
    // selectionSort(arr, n);
    // insertionSort(arr, n);
    // countingSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}

void bubbleSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            // already swapped
            return;
        }
    }
}

void selectionSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int maxElem = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[maxElem]){
                maxElem = j;
            }
        }
        swap(arr[i], arr[maxElem]);
    }
}

void insertionSort(int *arr, int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]<curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
    }
}

void countingSort(int *arr, int n){
    int freq[100000];
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for(int i=0; i<n; i++){
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal, arr[i]);

        freq[arr[i]]++;
    } 

    for(int i=maxVal,j=0; i>=minVal; i--){
        while(freq[i]>0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}