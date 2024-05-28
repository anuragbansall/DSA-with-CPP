#include <iostream>
using namespace std;

int main(){
    // ques 1
    /*
        print the square pattern using for loop
        ****
        ****
        ****
        ****
    */
   for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<"*";
    }
    cout<<"\n";
   }

    // ques 2
    // print numbers from n to 1 using for loop
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<i<<" ";
    }
    cout<<"\n";

    // ques 3
    // print the sum of digit of a number using while loop
    // hint : we can use n%10 to find our last digit
    // n % 10 = last digit of n
    // to remove last digit of number we can use n/10
    // n = n / 10 = removes last digit of n
    
    int n2;
    cout<<"enter n2 : ";
    cin>>n2;
    int n2_copy = n2;
    int sum = 0;
    while(n2_copy>0){
        int lastDigit = n2_copy%10;
        sum += lastDigit;
        n2_copy = n2_copy/10;
    }
    cout<<"sum is "<<sum<<"\n";

    // print the sum of odd digits of a number using while loop
    int n3;
    cout<<"enter n3 : ";
    cin>>n3;
    int n3_copy = n2;
    int sum2 = 0;
    while(n3_copy>0){
        int last_digit = n3_copy%10;
        if(last_digit%2 != 0){
            sum2 += n3_copy%10;
        }
        n3_copy = n3_copy/10;
    }

    cout<<"sum is "<<sum2<<"\n";

    // print the digits of a given number in reverse order using while loop
    int n4;
    cout<<"enter n4 : ";
    cin>>n4;
    int n4_copy = n4;
    while(n4_copy > 0){
        int last_digit = n4_copy%10;
        cout<<last_digit;
        n4_copy /= 10;
    }
    cout<<"\n";

    // reverse a given number and print the result
    // hint : res = res*10 + lastdigit;
    int n5;
    cout<<"enter n5 : ";
    cin>>n5;
    int n5_copy = n5;
    int result = 0;
    while(n5_copy > 0){
        int last_digit = n5_copy%10;
        result = result*10 + last_digit;
        n5_copy /= 10;
    }
    cout<<result<<"\n";
        
    return 0;
}