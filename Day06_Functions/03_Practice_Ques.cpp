#include <iostream>
#include <cmath>
using namespace std;

int product(int a, int b);
void oddOrEven(int n);
void facorial(int n);
bool isPrime(int n);

int main(){
    // question 1 : WAF to find the product of 2 numbers - a & b.
    cout<<product(5, 2)<<endl; // output : 5*2 = 10

    // question 2 : WAF to print if a number is odd or even;
    oddOrEven(10); // output : 10 is even.
    oddOrEven(15); // output : 15 is odd.

    // question 3 : WAF to print the factorial of a number, n.
    facorial(5); // output : 120

    // question 4 : WAF to print if a number is prime or not.
    cout<<isPrime(22)<<endl; // output : 0 (false)
    cout<<isPrime(23)<<endl; // output : 1 (true)
    

    return 0;
}

int product(int a, int b){
    return a*b;
}

void oddOrEven(int n){
    if(n%2 == 0){
        cout<<n<<" is even.\n";
    }else{
        cout<<n<<" is odd.\n";
    }
}

void facorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    cout<<fact<<"\n";
}

bool isPrime(int n){
    bool isPrime = true;
    if(n==1){
        return false;
    }
    for(int i=2; i<=sqrt(n);i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}