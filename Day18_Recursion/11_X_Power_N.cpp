#include <iostream>
using namespace std;

// Print X to the Power N - 0(log n) time complexity
int power(int x, int n);

int main(){
    cout<<power(2, 5)<<"\n"; // Output : 32

    return 0;
}

int power(int x, int n){
    if(n == 0){
        return 1;
    }

    int halfPow = power(x, n/2);
    int halfPowSquare = halfPow*halfPow;

    if(n%2 != 0){
        return x*halfPowSquare; 
    }
    return halfPowSquare;
}