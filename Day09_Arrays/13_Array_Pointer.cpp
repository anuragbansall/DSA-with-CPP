#include <iostream>
using namespace std;

int main(){
    // array pointer acts like a constant pointer.
    // eg - 
    int x = 10;
    int *ptr = &x;
    int y = 20;
    ptr = &y; // we can reinitialize new value to normal pointers.

    int arr[5];
    //  arr = &a; // this will give an error.

    return 0;
}