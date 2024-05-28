#include <iostream>
using namespace std;

bool isPalindrome(int n);
int sumofDigits(int n);
int abSquare(int a, int b);
int largestN(int a, int b, int c);
char nextChar(char a);

int main(){
    /*
        Question1 : Write a function to check if a number is a palindrome in C++.
        (121 is a palindrome, 321 is not).
        A number is called a palindrome if the number is equal to the reverse of a number. 
        Eg : 121 is a palindrome because the reverse of 121 is 121 itself.On the otherhand, 321 is not a palindrome because the reverse of 321 is 123,which is not equal to 321.
    */
    cout<<isPalindrome(321)<<"\n"; // output : 0 (false)
    cout<<isPalindrome(121)<<"\n"; // output : 1 (true)

   /*
        Question2 : Write a function to calculate the sum of digits of a number.
   */
    cout<<sumofDigits(145)<<"\n"; // output : 10

    /*
        Question 3 : Write a function which takes 2 numbers as parameters (a&b) and outputs : a^2 + b^2 + 2*ab
    */
    cout<<abSquare(4,5)<<"\n"; // output : 81

   /*
        Question 4 : Write a function that prints the largest of 3 numbers.
   */
    cout<<largestN(3,6,2)<<"\n"; // output : 6

  /*
        Question5 : Write a function that accepts a character(ch) as parameters & returns the character that occurs after ch in the English alphabet.
        Eg : input = ‘c’, return value =‘d’ 
        Note : for ch = ‘z’, return ‘a’.
  */
    cout<<nextChar('h')<<"\n"; // output : i
    cout<<nextChar('z')<<"\n"; // output : a


    return 0;
}

bool isPalindrome(int n){
    int nCopy = n;
    int reverse = 0;
    while(nCopy > 0){
        int lastDigit = nCopy%10;
        reverse = reverse*10 + lastDigit;
        nCopy /= 10;
    }
    if(n == reverse){
        return true;
    }else{
        return false;
    }
}

int sumofDigits(int n){
    int nCopy = n;
    int sum = 0;
    while(nCopy>0){
        int lastDigit = nCopy%10;
        sum+= lastDigit;
        nCopy /= 10;
    }

    return sum;
}

int abSquare(int a, int b){
    int res = a*a + b*b + 2*(a*b);
    return res;
}

int largestN(int a, int b, int c){
    int largest;
    if(a>=b && a>=c){
        largest = a;
    }else if(b>=c){
        largest = b;
    }else{
        largest = c;
    }

    return largest;
}

char nextChar(char a){
    char nextChar;
    if(a == 'z'){
        nextChar = 'a';
    }else{
        nextChar = a+1;
    }
    return nextChar;
}