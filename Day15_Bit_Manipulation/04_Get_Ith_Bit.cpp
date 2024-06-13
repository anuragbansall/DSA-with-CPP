#include <iostream>
using namespace std;

int getIthBit(int num, int i);

int main(){
    cout<<getIthBit(6,2)<<"\n"; // Output : 1
    cout<<getIthBit(6,3)<<"\n"; // Output : 0

    return 0;
}

int getIthBit(int num, int i){
    int bitMask = 1<<i;
    if((num & bitMask) == 0){
        return 0; // ith bit is 0
    }else{
        return 1; // ith bit is 1
    }
}