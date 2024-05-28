#include <iostream>
using namespace std;

int main(){
    // we assign NULL value to a pointer to show that it doesn't point to any location
    int *ptr = NULL;
    
    cout<<ptr<<"\n"; // output : 0x0
    // dereferencing null pointer is not possible as it'll result in error
    // cout<<*ptr<<"\n"; // segmentation fault

    return 0;
}