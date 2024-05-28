#include <iostream>
using namespace std;

int main(){
    /* 
        3.) Addition & Subtraction of Pointers
        ptr1 + ptr2 // invalid operation
        ptr - ptr2 // both should be of same type
    */

    int a;
    int *ptr1 = &a;
    
    int b;
    int *ptr2 = &b;
    
    int c;
    int *ptr3 = &c;

    cout<<ptr1 - ptr2<<"\n";
    cout<<ptr1 - ptr3<<"\n";
    cout<<ptr2 - ptr3<<"\n";

    int *ptr4 = ptr1 + 3;
    cout<<ptr1 - ptr4<<"\n";

    return 0;
}