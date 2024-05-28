#include <iostream>
using namespace std;

int main(){
    // a special variable that stores address of another variable

    int a = 10;
    // we can't directly store address of variable in another variable without pointers.
    // int b = &a; // result an error

    int *ptr = &a;
    cout<<ptr<<"\n"; // prints the adderess of variable a
    // &a == ptr;

    float b = 3.14;
    float *ptr2 = &b;
    cout<<ptr2<<"\n"; // prints the adderess of variable b

    /*
         The size of a pointer in C++ depends on the compiler and the target platform. 
         On a 32-bit platform, a pointer is typically 4 bytes in size, 
         while on a 64-bit platform, a pointer is typically 8 bytes in size.
    */
    cout<<sizeof(ptr)<<"\n"; // output : 4
    cout<<sizeof(ptr2)<<"\n"; // output : 4

    return 0;
}