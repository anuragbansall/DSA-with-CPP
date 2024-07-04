#include <iostream>
using namespace std;

int countSetBits(int n);

int main(){
    cout<<countSetBits(17)<<"\n";

    return 0;
}

int countSetBits(int n){
    int count = 0;
    for(int i=1; i<=n; i++){\
        int temp = i;
        while(temp){
            int lastBit = temp&1;
            count += lastBit;
            temp>>=1;
        }
    }

    return count;
}