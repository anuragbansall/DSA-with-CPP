#include <iostream>
using namespace std;

int main(){
    // gets the value of the variable pointed by any pointer
    // '*' operator lets us directly access & modify the value of variable

    int a = 10;
    int *ptr = &a;

    cout<<ptr<<"\n"; // output : address of a
    cout<<*(&a)<<"\n"; // output : value of a
    cout<<*ptr<<"\n"; // output : value of a

    // modify
    *ptr = 20;
    cout<<a<<"\n"; // ouputt : 20


    return 0;
}