#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array Before Sort : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    sort(arr, arr+n);

    cout<<"Array After Sort (Ascending) : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    sort(arr, arr+n, greater<int>());

    cout<<"Array After Sort (Descending) : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}