#include <iostream>
using namespace std;

int main(){
    // find largest number in array

    int arr[] = {5, 4, 3, 9, 2}; 
    int n = sizeof(arr)/sizeof(int);

    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    cout<<"Largest Number is "<<largest<<"\n";

    return 0;
}