#include <iostream>
#include <cmath>
using namespace std;
int fact(int n);
int binoCoeff(int n, int r);
bool isPrime(int n);
void allPrimes(int n);

int main(){
    // ques 1 : WAF to find the binomial coefficient for given n & r.
    /*
        nCr = (n!) / (r! * (n-r)!)
    */
    cout<<binoCoeff(4, 2)<<"\n";

    // ques 2 : WAF to print all primes in a range from 2 to n.   
    allPrimes(50);

    return 0;
}

int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }

    return fact;
}

int binoCoeff(int n, int r){
    int val1 = fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);

    int binoCoeff = val1 / (val2*val3);

    return binoCoeff;
}

bool isPrime(int n){
    if(n == 1){
        return false;
    }

    for(int i=2; i<=sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

void allPrimes(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}