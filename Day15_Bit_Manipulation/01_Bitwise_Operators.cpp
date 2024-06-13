#include <iostream>
using namespace std;

int main(){
    // Bitwise Operators

    // Bitwise AND &
    /*
        0 & 0 = 0
        0 & 1 = 0
        1 & 0 = 0
        1 & 1 = 1
    */

    // Bitwise AND of 3,5
    /*
        3 = 11, 5 = 101
          0 1 1
        & 1 0 1
          0 0 1 = (1)10
          Ans = 1
    */
    cout<<(3 & 5)<<"\n"; // Output : 1

    // Bitwise OR |
     /*
        0 | 0 = 0
        0 | 1 = 1
        1 | 0 = 1
        1 | 1 = 1
    */

    // Bitwise OR of 3,5
    /*
        3 = 11, 5 = 101
          0 1 1
        | 1 0 1
          1 1 1 = (7)10
          Ans = 7
    */
    cout<<(3 | 5)<<"\n"; // Output : 7

    // Bitwise XOR ^
    // Bitwise XOR ^
     /*
        0 ^ 0 = 0
        0 ^ 1 = 1
        1 ^ 0 = 1
        1 ^ 1 = 0
    */

    // Bitwise XOR of 3,5
    /*
        3 = 11, 5 = 101
          0 1 1
        ^ 1 0 1
          1 1 0 = (6)10
          Ans = 6
    */
    cout<<(3 ^ 5)<<"\n"; // Output : 6

    // Bitwise NOT Operator ~
    /*
        Find ~(3)

        Step 1 : Binary Form of 3(assume 8 bits) is :
        0 0 0 0 0 0 1 1
        
        Step 2 : Find 1's Compliment of (0 0 0 0 0 0 1 1)
        0 0 0 0 0 0 1 1
        1 1 1 1 1 1 0 0 (1's Compliment)

        Step 3 : MSB is (-ve) Magnitude Bits are 1 1 1 1 1 0 0. Find 1's Compliment of Magnitude Bits.
        1 1 1 1 1 0 0
        0 0 0 0 0 1 1 (1's Compliment)

        Step 4 : Add 1 in 1's Compliment of Magnitude Bits
        0 0 0 0 0 1 1
      + 0 0 0 0 0 0 1
        0 0 0 0 1 0 0 = (4)10

        MSB is (-ve)
        Magnitude is 4
        So ~3 = -4
    */
    cout<<(~3)<<"\n";

    return 0;
}