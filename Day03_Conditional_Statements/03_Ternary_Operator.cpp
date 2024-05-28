#include <iostream>
using namespace std;

int main(){
    // ternary operator
    // syntax :
    /*
        variable = condition ? statement1 : statement2;
    */
   int age = 18;
   bool isAdult = (age>=18) ? true : false;

    // largest of two numbers
    int a=16, b=8;    
    int largestN = (a>b) ? a : b;
    cout<<largestN<<"\n";

    // odd or even
    int n = 8;
    bool isEven = (n%2==0) ? true : false;

    return 0;
}