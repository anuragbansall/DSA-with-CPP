#include <iostream>
using namespace std;

void changeNumb(int &n);

int main(){
    // reference variable is an alternate name (alias) of already existing variable.

    int a = 5;
    int &b = a;

    b = 10;
    cout<<a<<"\n"; // output : 10
    cout<<b<<"\n";  // output : 10

    changeNumb(a);
    cout<<a<<"\n"; // output : 20;

    return 0;
}
void changeNumb(int &n){
    n *= 2;
}
