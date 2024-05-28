#include <iostream>
using namespace std;

int main(){
    int a = 10; // normal variable
    int *ptr = &a; // pointer which stores address of a
    int **pptr = &ptr; // pointer to pointer which stores address of ptr

    cout<<a<<"\n"; // output : value of a
    cout<<ptr<<"\n"; // output : address of a
    cout<<pptr<<"\n"; // output : address of ptr

    return 0;
}