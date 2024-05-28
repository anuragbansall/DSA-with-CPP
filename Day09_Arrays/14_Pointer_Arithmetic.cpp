#include <iostream>
using namespace std;

int main(){
    /* 
        1.) Increment & Decrement Operators
        ptr++ or ++ptr
        ptr-- or --ptr
    */

    int a = 10;
    int *ptr = &a;
    cout<<"Before Increment : "<<ptr<<"\n";
    cout<<"After Increment 1 : "<<++ptr<<"\n";
    cout<<"After Increment 2 : "<<++ptr<<"\n";
    cout<<"After Decrement 1 : "<<--ptr<<"\n";
    cout<<"After Decrement 2 : "<<--ptr<<"\n";

    return 0;
}