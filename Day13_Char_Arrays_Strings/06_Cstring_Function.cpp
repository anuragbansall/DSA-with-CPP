#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // strcpy()
    char fName[100];
    // fName = "Anurag Bansal"; // error cant assign value to char array this way
    // to solve this problem : 
    strcpy(fName,"Anurag Bansal");
    cout<<fName<<"\n";

    // strcat()
    char str1[] = "Anurag";
    char str2[] = "Bansal";
    strcat(str1, str2);
    cout<<str1<<"\n"; // Output : AnuragBansal

    // strcmp()
    cout<<strcmp("abc", "abc")<<"\n"; // Output : 0;
    cout<<strcmp("abc", "xyz")<<"\n"; // Output : -ve value;
    cout<<strcmp("xyz", "abc")<<"\n"; // Output : +ve value;

    return 0;
}