#include <iostream>
using namespace std;

// Print numbers in increasing order using recursion (from 1 to n)
void increasingOrder(int n);

int main(){
    increasingOrder(10);

    return 0;
}

void increasingOrder(int n){
    if(n==0){
        return;
    }
    increasingOrder(n-1);
    cout<<n<<" ";
}