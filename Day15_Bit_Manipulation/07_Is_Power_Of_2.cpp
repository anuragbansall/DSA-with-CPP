#include <iostream>
using namespace std;

bool isPowerOf2(int num);

int main(){
    cout<<isPowerOf2(2)<<"\n"; // Output : 1(true)
    cout<<isPowerOf2(4)<<"\n"; // Output : 1(true)
    cout<<isPowerOf2(5)<<"\n"; // Output : 0(false)
    cout<<isPowerOf2(32)<<"\n"; // Output : 1(true)

    return 0;
}

bool isPowerOf2(int num){
    if(!(num & num-1)){
        return true;
    }else{
        return false;
    }
}