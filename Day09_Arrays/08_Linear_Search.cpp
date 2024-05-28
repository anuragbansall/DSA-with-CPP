#include <iostream>
using namespace std;

int linear_search(int *arr, int n, int key);

int main(){
    // search for key 
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr) / sizeof(int);
    int key;

    cout<<"Enter Key : ";
    cin>>key;

    int ans = linear_search(arr, n, key);
    cout<<ans<<"\n";

    return 0;
}

int linear_search(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }

    return -1;
}