#include <iostream>
using namespace std;

int main(){
    /* 
        2.) Addition & Subtraction of Constants
        ptr + 3
        ptr - 3
    */

    int a = 10;
    int *ptr = &a;
    
    cout<<ptr<<"\n";
    cout<<ptr+1<<"\n";
    cout<<ptr+2<<"\n";
    cout<<ptr+3<<"\n";
    
    cout<<ptr-3<<"\n";
    cout<<ptr-2<<"\n";
    cout<<ptr-1<<"\n";
    
    cout<<"\n";    
    cout<<"-- Array --";
    cout<<"\n";
    
    int arr[] = {2, 4, 6, 8, 10};
    cout<<*arr<<"\n";
    cout<<*(arr+1)<<"\n";
    cout<<*(arr+2)<<"\n";
    cout<<*(arr+3)<<"\n";
    cout<<*(arr+4)<<"\n";

    return 0;
}