#include <iostream>
using namespace std;

void isEvenOrOdd(int n);

int main(){
    // Check if Odd or Even (using bits)

    isEvenOrOdd(5); // Output : Odd
    isEvenOrOdd(8); // Output : Even

    return 0;
}

void isEvenOrOdd(int n){
    if((n&1) == 0){
        cout<<"Even\n";
    }else{
        cout<<"Odd\n";
    }
}