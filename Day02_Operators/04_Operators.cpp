#include <iostream>
using namespace std;

int main(){
    //  arithmetic operators - binary
    int a=3, b=2;
    // addition
    cout<<a+b<<endl; // output : 5
    // subtraction
    cout<<a-b<<endl; // output : 1
    // multiplication
    cout<<a*b<<endl; // output : 6
    // division
    cout<<a/b<<endl; // output : 1
    // modulo 
    cout<<a%b<<endl; // output : 1 

    //  arithmetic operators - unary
    int x=15, y=10;
    ++x; //pre increment  (change then use)
    x++; // post increment (use then change)

    --x; //pre decrement (change the use)
    x--; //post decrement (use then change)
    cout<<x<<endl;

    //  assignment operators 
    int n = 10;
    n += 5; // n = n+5
    n -= 2; // n = n-2
    n *= 3; // n = n*3
    n /= 2; // n = n/2
    n %= 2; // n = n%2

    // relational operators
    int r1=5, r2=6;
    cout<<(r1==r2)<<endl; // output : 0(false)
    cout<<(r1!=r2)<<endl; // output : 1(true)
    cout<<(r1>=r2)<<endl; // output : 0(false)
    cout<<(r1<=r2)<<endl; // output : 1(true)
    cout<<(r1>r2)<<endl; // output : 0(false)
    cout<<(r1<r2)<<endl; // output : 1(true)

    // logical operators
    cout<<((3<5)&&(10>5))<<endl; // output : 1(true)
    cout<<((3>5)&&(10>5))<<endl; // output : 0(false)
    
    cout<<((3>5)||(10>5))<<endl; // output : 1(true)
    cout<<((3>5)||(10<5))<<endl; // output : 0(false)
    
    cout<<(!(3==5))<<endl; // output : 1(true)
    cout<<(!(5==5))<<endl; // output : 0(false)

    return 0;
}