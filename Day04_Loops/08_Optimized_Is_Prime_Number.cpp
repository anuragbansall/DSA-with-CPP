#include <iostream>
#include <cmath> // to use sqrt();
using namespace std;

int main(){
    // -- optimized version --
    // check if a number is prime or not
    // A prime number is a positive integer greater than 1 that has no positive integer divisors other than 1 and itself.
    // eg : 2, 5, 7, 11, 13 ....

    int n;
    cout<<"enter n : ";
    cin>>n;
    bool isPrime = true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<n<<" is a prime number\n";
    }else{
        cout<<n<<" is not a prime number\n";
    }

    return 0;
}