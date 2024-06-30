#include <iostream>
using namespace std;

// Predict The Output

class A{
public:
    A(){
        cout<<"Constructor A\n";
    }
    ~A(){
        cout<<"Destructor A\n";
    }
};

class B : public A{
public:
    B(){
        cout<<"Constructor B\n";
    }
    ~B(){
        cout<<"Destructor B\n";
    }
};

int main(){
    B b1;

    return 0;
}

// Output :
// Constructor A
// Constructor B
// Destructor B
// Destructor A