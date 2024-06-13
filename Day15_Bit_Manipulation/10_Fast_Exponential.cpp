#include <iostream>
using namespace std;

int fastExpo(int x, int n);

int main(){
    cout<<fastExpo(3,5)<<"\n";
    
    return 0;
}

int fastExpo(int x, int n){
    int ans = 1;
    while(n>0){
        int lastBit = n&1;
        if(lastBit){
            ans *= x;
        }
        x *= x;
        n>>=1;
    }

    return ans;
}