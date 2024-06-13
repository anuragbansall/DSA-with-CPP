#include <iostream>
using namespace std;

int clearIthBit(int num, int i);

int main(){
    cout<<clearIthBit(6,1)<<"\n"; // Output : 4
    cout<<clearIthBit(7,0)<<"\n"; // Output : 6

    return 0;
}

int clearIthBit(int num, int i){
    int bitMask = ~(1 << i);
    int ans = num & bitMask;

    return ans;
}