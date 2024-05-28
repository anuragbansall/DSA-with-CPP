#include <iostream>
using namespace std;

int x = 15; // global variable, this variable can be accessed anywhere in the program.

int main(){
    // scope - local scope vs global scope
    /*
        local : 
            functions
            if-else
            loops
            {}

        eg - 
        for(int i=0; i<=10; i++){ // here i variavle has local scope
            cout<<i; // i can be accessed inside loop.
        }
        cout<<i; // but if we try to access after loop it will result an error.
    */

    cout<<x<<"\n"; // output : 15; // global variable

    return 0;
}