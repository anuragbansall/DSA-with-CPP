#include <iostream>
using namespace std;

int countSetBits(int num);

int main(){
    cout<<countSetBits(10)<<"\n"; // Output : 2
    cout<<countSetBits(7)<<"\n"; // Output : 3

    return 0;
}

int countSetBits(int num){
    int count = 0;
    while(num>0){
        int lastBit = num & 1;
        count += lastBit;
        num = num >> 1;
    }

    return count;
}