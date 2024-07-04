#include <iostream>
using namespace std;

void func();

int main(){
    func();

    return 0;
}

// recursive function - recursion
// this function will run infinitely because there is no base case(end point).
void func(){
    cout<<"Function Call";
    func();
}