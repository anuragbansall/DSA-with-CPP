#include <iostream>
using namespace std;

int fibonacci(int n);

int main(){
    cout<<fibonacci(5)<<"\n"; // Output : 5
    cout<<fibonacci(6)<<"\n"; // Output : 8

    return 0;
}

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}