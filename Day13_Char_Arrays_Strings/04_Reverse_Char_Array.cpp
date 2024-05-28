#include <iostream>
#include <string.h>
using namespace std;

void reverseString(char *str, int n);

int main(){
    char str[] = "code";
    int n = strlen(str);
    cout<<str<<"\n";
    reverseString(str, n);
    cout<<str<<"\n";

    return 0;
}

void reverseString(char *str, int n){
    int start = 0, end = n-1;
    while(start<end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
}