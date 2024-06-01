#include <iostream>
#include <string.h>
using namespace std;

void toUpperCase(char *str, int len);
void toLowerCase(char *str, int len);

int main(){
    char str[] = "ApPle";
    int len = strlen(str);
    cout<<str<<"\n";
    toUpperCase(str, len);
    cout<<str<<"\n";
    toLowerCase(str, len);
    cout<<str<<"\n";

    return 0;
}

void toUpperCase(char *str, int len){
    for(int i=0; i<len; i++){
        if(str[i]>='a' && str[i]<='z'){
            int pos = str[i]-'a';
            str[i] = 'A'+pos;
        }
    }
}

void toLowerCase(char *str, int len){
    for(int i=0; i<len; i++){
        if(str[i]>='A' && str[i]<+'Z'){
            int pos = str[i]-'A';
            str[i] = 'a'+pos;
        }
    }
}