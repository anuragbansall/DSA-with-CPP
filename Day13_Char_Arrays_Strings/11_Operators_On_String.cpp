#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "cat";
    string str2 = "rat";

    cout<<(str1==str2)<<"\n"; // Output : 0(false)
    cout<<(str1!=str2)<<"\n"; // Output : 1(true)
    cout<<(str1>str2)<<"\n"; // Output : 0(false)
    cout<<(str1<str2)<<"\n"; // Output : 1(true)
    cout<<(str1>=str2)<<"\n"; // Output : 0(false)
    cout<<(str1<= str2)<<"\n"; // Output : 1(true)

    string str3 = "anurag";
    string str4 = "anurag";

    cout<<(str3==str4)<<"\n"; // Output : 1(true)
    cout<<(str3!=str4)<<"\n"; // Output : 0(false)
    cout<<(str3>str4)<<"\n"; // Output : 0(false)
    cout<<(str3<str4)<<"\n"; // Output : 0(false)
    cout<<(str3>=str4)<<"\n"; // Output : 1(true)
    cout<<(str3<= str4)<<"\n"; // Output : 1(true)


    return 0;
}