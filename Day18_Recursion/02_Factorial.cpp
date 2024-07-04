#include <iostream>
using namespace std;

// Factorial of n using recursive function
int fact(int n);

int main(){
    cout<<fact(5)<<"\n";

    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}