#include <iostream>
using namespace std;

int binary_search(int *arr, int n, int key);

int main(){
    // binary search
    // prerequisite : sorted array
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cout<<"Enter Key : ";
    cin>>key;

    int ans = binary_search(arr,n,key);
    cout<<ans<<"\n";


    return 0;
}

int binary_search(int *arr, int n, int key){
    int start = 0, end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid]<key){ //search second half
            start = mid+1;
        }else{ // search first half
            end = mid-1;
        }
    }

    return -1;
}