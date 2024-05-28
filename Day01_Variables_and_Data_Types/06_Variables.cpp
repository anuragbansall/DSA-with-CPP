#include <iostream>
using namespace std;

int main(){

    // variable declaration format
    // datatype identifier = value;
    // int var = 15; 

    // variable can also be declared without intializing any value. and later we can assign value to it.
    // ex - 
    // int a;
    // a = 10;

    // Note - if we declare variable without initializing any value and try to access it will give us some random garbage value.
    // ex -
    // int a;
    // cout<<a; //ouput can be like this : 878657677

    int a = 5; //variable1
    int b = 10; //variable2

    cout<<a<<endl; // Output : 5
    cout<<b<<endl; // Output : 10

    return 0;
}