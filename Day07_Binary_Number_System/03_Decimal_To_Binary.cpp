#include <iostream>
using namespace std;

int decimalToBinary(int n);

int main(){
    /* 
        WAP which will take decimal n from the user and display its binary     representation.

        eg -
             input : 21
             output : 10101
    */

    int n;
    cout<<"enter decimal number : ";
    cin>>n;
    cout<<decimalToBinary(n)<<"\n";

    return 0;
}

int decimalToBinary(int n){
    long int nCopy = n;
    int pow = 1;
    int res = 0;
    while(nCopy>0){
        int remainder = nCopy%2;
        res += remainder * pow;
        pow *= 10;
        nCopy /= 2;
    }

    return res;
}