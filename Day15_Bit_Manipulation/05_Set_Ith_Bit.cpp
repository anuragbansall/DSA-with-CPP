#include <iostream>
using namespace std;

int setIthBit(int num, int i);

int main(){
    cout<<setIthBit(6,3)<<"\n";  // Output : 14
    cout<<setIthBit(8,2)<<"\n";  // Output : 12

    return 0;
}

int setIthBit(int num, int i){
    int bitMask = 1<<i;
    int ans = num | bitMask;

    return ans;
}