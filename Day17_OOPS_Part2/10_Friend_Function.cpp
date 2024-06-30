#include <iostream>
using namespace std;

class A{
    string secret = "Secret Data";
    friend void revealSecret(A &obj);
};

void revealSecret(A &obj); // becomes a friend function of class A

int main(){
    A a1;
    revealSecret(a1);

    return 0;
}

void revealSecret(A &obj){
    cout<<obj.secret<<"\n";
}