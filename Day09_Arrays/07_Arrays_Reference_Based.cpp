#include <iostream>
using namespace std;

void func(int arr[]);

int main(){
    int arr[] = {2, 5, 1, 7, 1};
    // array_name -> pointer(pointing 0th index of an array)
    cout<<arr<<"\n"; // output : 0x.... (some address)
    cout<<*arr<<"\n"; //output : 2
    cout<<*(arr+1)<<"\n"; //output : 5
    cout<<*(arr+2)<<"\n"; //output : 1
    cout<<*(arr+3)<<"\n"; //output : 7
    cout<<*(arr+4)<<"\n"; //output : 1

    func(arr);
    cout<<arr[0]<<"\n"; // output : 20

    return 0;
}

void func(int arr[]){
    arr[0] = 20;
}