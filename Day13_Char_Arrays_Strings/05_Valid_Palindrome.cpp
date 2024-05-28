#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char *str, int n);

int main(){
    char str[] = "racecar";
    int n = strlen(str);
    cout<<isPalindrome(str, n)<<"\n"; // output : 1(true)

    return 0;
}

bool isPalindrome(char *str, int n){
    int start = 0, end = n-1;
    while(start<end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }

    return true;
}