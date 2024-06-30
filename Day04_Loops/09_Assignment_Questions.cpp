#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // question 1
    /*
        Question1 : WAP to find the Factorial of a number entered by the user.
        Hint : factorial of a number (n) = n*(n-1)*(n-2)*(n-3)*......* 1 
        and exists for positive numbers only.We write factorial as n! So,factorial of 0!=1, 1!=1, 2!=2, 3!=6, 4!=24 and soon.
        Note - Please do not confuse factorial with NOT EQUAL TO operator, they are not the same.
    */
   int n,fact=1;
   cout<<"enter n : ";
   cin>>n;
   for(int i=n;i>=1;i--){
        fact *= i;
   }
   cout<<"Factoral of "<<n<<" is "<<fact<<"\n";

    // question 2
    /*
        WAP to print the multiplication table of a number, entered by the user.
    */    
   int n2;
   cout<<"enter n2 : ";
   cin>>n2;

   for(int i=1;i<=10;i++){
    cout<<(n2*i)<<"\n";
   }

    // question 3
    /*
        WAP to input a number and check whether the number is an Armstrong number or not.
        An Armstrong number is a number that is equal to the sum of cubes of its digits.
    */   
   int n3;
   cout<<"enter n3 : ";
   cin>>n3;
   int n3_copy = n3;
   int cubeSum = 0;
   
   while(n3_copy>0){
    int lastDigit = n3_copy%10;
    cubeSum += (lastDigit*lastDigit*lastDigit);
    n3_copy /= 10;
   }
    
    if(n3 == cubeSum){
        cout<<n3<<" is a armstrong number\n";
    }else{
        cout<<n3<<" is not a armstrong number\n";
    }

    // question 4
    /*
        For a positive N, WAP that prints all the prime numbers from 2 to N.(Assume N >= 2)
    */
   int n4;
   cout<<"enter n4 : ";
   cin>>n4;

   for(int i=2;i<=n4;i++){
        bool isPrime = true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                isPrime = false;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
   }
   cout<<"\n";

    // question 5
    /*
        For a positive N, WAP that prints the first N Fibonacci numbers.(AssumeN>=2) Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34....
        This is a series where each number is a sum of previous 2 numbers in the series.
        Eg : 1=0+1, 2=1+1, 3=1+2, 5=2+3, 8=3+5 & soon.
    */   
   int n5;
   cout<<"enter n5 : ";
   cin>>n5;

   int firstN = 0;
   int secondN = 1;
   int nextDigit;

   cout<<firstN<<" ";
   cout<<secondN<<" ";

   for(int i=0;i<n5-2;i++){
        nextDigit = firstN+secondN;
        cout<<nextDigit<<" ";
        firstN = secondN;
        secondN = nextDigit;
        if(nextDigit>n5){
            break;
        }
   }
   cout<<"\n";


    return 0;
}