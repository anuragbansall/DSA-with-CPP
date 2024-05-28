#include <iostream>
using namespace std;

void helloWorld(); // function declaration
/*
    we can also declare and define function at a same line
    
    void helloworld(){
            cout<<"hello, world\n";
    }
*/

int main(){
    // functions syntax
    /*
        returnType funcName(parameters ...){
            // do some work
            return someVal; // optional
        }

        funcName(arguments ...); // function call
    */

   helloWorld(); // function call

    return 0;
}

void helloWorld(){ // function defination
    cout<<"hello, world\n";
}