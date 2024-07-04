#include <iostream>
using namespace std;

// Print numbers in decreasing order using recursion (from n to 1)
void decreasingOrder(int n);

int main(){
    decreasingOrder(10);

    return 0;
}

void decreasingOrder(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    decreasingOrder(n-1);
}