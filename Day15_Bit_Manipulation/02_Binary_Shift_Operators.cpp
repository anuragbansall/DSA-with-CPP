#include <iostream>
using namespace std;

int main(){
    // Find 7<<2 (left shift)
    // Step 1 : Binary of 7 is (assuming 8 bits) : 0 0 0 0 0 1 1 1
    // Step 2 : Left Shift all Bits 2 times : 
    /*
        Note : Fill empty space with 0.
        1st Shift : 0 0 0 0 1 1 1 0
        2nd Shift : 0 0 0 1 1 1 0 0 = (28)10
    */
    // Shortcut Way : 
    // Step 1 : Binary of 7 is (assuming 8 bits) : 0 0 0 0 0 1 1 1
    // Step 2 : Remove 2/b zeroes from start and add them on last.
    /*
        0 0 0 1 1 1 0 0 = (28)10
    */

    // Note (a<<b) always equal to a*2^b
    cout<<(7<<2)<<"\n"; // Output : 28


    // Find 7>>2 (right shift)
    // Step 1 : Binary of 7 is (assuming 8 bits) : 0 0 0 0 0 1 1 1
    // Step 2 : Right Shift all Bits 2 times : 
    /*
        Note : Fill empty space with 0.
        1st Shift : 0 0 0 0 0 0 1 1
        2nd Shift : 0 0 0 0 0 0 0 1 = (1)10
    */
    // Shortcut Way : 
    // Step 1 : Binary of 7 is (assuming 8 bits) : 0 0 0 0 0 1 1 1
    // Step 2 : add 2/b zeroes on start and add remove 2/b bits from end.
    /*
        0 0 0 0 0 0 0 1 = (1)10
    */

    // Note (a<<b) always equal to a/2^b
    cout<<(7>>2)<<"\n"; // Output : 1

    return 0;
}