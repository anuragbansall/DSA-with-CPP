#include <iostream>
using namespace std;

// Print X to the Power N - 0(n) time complexity
int power(int x, int n);

int main(){
    cout<<power(2, 5)<<"\n"; // Output : 32

    return 0;
}

int power(int x, int n){
    if(n == 0){
        return 1;
    }

    return x * power(x, n-1);
}