#include <iostream>
using namespace std;

int sumOfNumbers(int n);

int main(){
    cout<<sumOfNumbers(5)<<"\n";
    cout<<sumOfNumbers(6)<<"\n";

    return 0;
}

int sumOfNumbers(int n){
    if(n==1){
        return 1;
    }
    return n+sumOfNumbers(n-1);
}