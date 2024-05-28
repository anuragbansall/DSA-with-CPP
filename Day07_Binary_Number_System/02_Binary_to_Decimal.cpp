#include <iostream>
using namespace std;

int binaryToDecimal(int n);

int main(){
    /* 
        WAP which will take binary n from the user and display its decimal       representation.

        eg -
             input : 10101
             output : 21
    */

    int n;
    cout<<"enter binary number : ";
    cin>>n;

    cout<<binaryToDecimal(n)<<"\n";

    return 0;
}

int binaryToDecimal(int n){
    int nCopy = n;
    int pow = 1;
    int ans = 0;

    while(nCopy>0){
        int lastDigit = nCopy%10;
        if(lastDigit == 1){
            ans += lastDigit*pow;
        }
        // check if binary number is invalid
        else if(lastDigit != 0){
            cout<<"invalid binary number!\n";
            return 1;
        }
        pow *= 2;
        nCopy /= 10;
    }

    return ans;
}