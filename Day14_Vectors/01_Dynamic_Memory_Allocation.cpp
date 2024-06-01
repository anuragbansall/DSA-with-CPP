#include <iostream>
using namespace std;

int main(){
    int staticArr[100] = {1, 2, 3, 4, 5}; // Static Memory Allocation - Defining Memory at Compile Time

    int size;
    cout<<"Enter Size : ";
    cin>>size;

    int *dynamicArr = new int[size];
    
    for(int i=0; i<size; i++){
        dynamicArr[i] = i+1;
        cout<<dynamicArr[i]<<" ";
    }
    cout<<"\n";
    
    delete[] dynamicArr; // Will delete dynamic array created in dynamic memoery

    return 0;
}