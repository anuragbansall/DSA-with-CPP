#include <iostream>
using namespace std;

void changeNumb(int n);
void changeNumb2(int *n);

int main(){
    // passing arguments
    /*
        1.) Pass by Value : 
            When parameter is a copy of actual argument variable in memory.

        2.) Pass by Reference (pass by address) :
            When we pass the reference of argument to the function. 
            - pass by pointer
            - pass by reference variable
    */

    // pass by value
    int a = 10;

    changeNumb(a); // pass by value
    cout << a << "\n"; // output : 10

    changeNumb2(&a); // pass by reference - pointer
    cout << a << "\n"; // output : 20

    int *ptr = &a;
    changeNumb2(ptr); // pass by pointer
    cout<<a<<"\n"; // output : 40


    return 0;
}

void changeNumb(int n){
    n *= 2;
}
void changeNumb2(int *n){
    *n *= 2;
}
