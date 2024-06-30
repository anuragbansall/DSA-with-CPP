#include <iostream>
using namespace std;

void counter();

int main(){
    counter(); // Output : 1
    counter(); // Output : 2
    counter(); // Output : 3

    return 0;
}

// static variable in function
void counter(){
    static int count = 0;
    count++;

    cout<<count<<"\n";
}