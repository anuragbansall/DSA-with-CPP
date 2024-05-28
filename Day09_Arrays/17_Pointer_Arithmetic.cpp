#include <iostream>
using namespace std;

int main(){
    /* 
        4.) Comparison (==, <, <=, >, >=) 
    */

   int arr[] = {2, 4, 6, 8, 10};
   int *ptr1 = arr;
   int *ptr2 = ptr1+3;

   cout<<(ptr1>ptr2)<<"\n"; // output : 0(false)
   cout<<(ptr1<ptr2)<<"\n"; // output : 1(true)
   cout<<(ptr1==arr)<<"\n"; // output : 1(true)

    return 0;
}