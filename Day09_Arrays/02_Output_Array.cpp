#include <iostream>
using namespace std;

int main(){
    int arr[5] = {6, 5, 8, 9, 10};
    cout<<arr[0]<<" "; // output : 6
    cout<<arr[1]<<" "; // output : 5
    cout<<arr[2]<<" "; // output : 8
    cout<<arr[3]<<" "; // output : 9
    cout<<arr[4]<<" "; // output : 10
    cout<<"\n";

    // more better and compact way would be : 
    int length = sizeof(arr)/sizeof(int);
    for(int i=0; i<length;i++){
        cout<<arr[i]<<" ";
    } // ouput : 6 5 8 9 10
    cout<<"\n";

    return 0;
}