#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char arr[5] = {'a','b','c','d','e'};
    cout<<arr[0]<<"\n";
    cout<<arr[1]<<"\n";
    cout<<arr[2]<<"\n";
    cout<<arr[3]<<"\n";
    cout<<arr[4]<<"\n";
    cout<<arr<<"\n";

    cout<<"\n";

    // character array creation & output
    char str1[] = "code";
    cout<<str1<<"\n"; // output : code
    cout<<"Length : "<<strlen(str1)<<"\n"; // strlen() dont include '\0'
    char str2[5] = "code";
    cout<<str2<<"\n"; // output : code
    cout<<"Length : "<<strlen(str2)<<"\n"; // strlen() dont include '\0'
    
    char str3[] = {'c','o','d','e','\0'};
    cout<<str3<<"\n"; // output : code
    cout<<"Length : "<<strlen(str3)<<"\n"; // strlen() dont include '\0'
    char str4[5] = {'c','o','d','e','\0'};
    cout<<str3<<"\n"; // output : code
    cout<<"Length : "<<strlen(str3)<<"\n"; // strlen() dont include '\0'

    return 0;
}