#include <iostream>
using namespace std;

int updateIthBit(int num, int i, int val);
int clearIBits(int num, int i);

int main(){
    /*
        Ques1- WAF to update the ith bit in a number according to given value (0 or 1)
        num = 7, i = 2, val = 0
        num = 7, i = 3, val = 1
    */

    cout<<updateIthBit(7,2,0)<<"\n"; // Output : 3
    cout<<updateIthBit(7,3,1)<<"\n"; // Output : 15

    /*
        Ques2- WAF to clear last i bits of a number
        num = 15, i = 2,
    */
    cout<<clearIBits(15,2)<<"\n"; // Output : 12

    return 0;
}

int updateIthBit(int num, int i, int val){
    num = num & ~(1<<i); // clear ith bit
    num = num | (val<<i);
    return num;
}

int clearIBits(int num, int i){
    int bitMask = ~0<<i;
    return num & bitMask;
}