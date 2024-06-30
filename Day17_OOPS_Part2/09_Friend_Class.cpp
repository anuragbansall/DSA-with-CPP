#include <iostream>
using namespace std;

class A{
    string secret = "Secret Data";
    friend class B;
};

class B{ // becomes a friend class of A
public:
    void showSecret(A &obj){
        cout<<obj.secret<<"\n";
    }
};

int main(){
    A a1;
    B b1;

    b1.showSecret(a1);

    return 0;
}