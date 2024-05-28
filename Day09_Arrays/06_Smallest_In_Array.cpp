#include <iostream>
using namespace std;

int main(){
    // find smallest number in array

    int arr[] = {5, 4, 3, 9, 2}; 
    int n = sizeof(arr)/sizeof(int);

    int smallest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    cout<<"Smallest Number is "<<smallest<<"\n";

    return 0;
}