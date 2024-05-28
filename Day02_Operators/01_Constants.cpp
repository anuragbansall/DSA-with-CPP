#include <iostream>
using namespace std;

int main(){
    const int num = 25; // constant variable
    int num2 = 30; // normal variable

    num2 = 45; // we can change value of normal variable.
    // num = 20; // but changing value of constant will give an error.
    return 0;
}