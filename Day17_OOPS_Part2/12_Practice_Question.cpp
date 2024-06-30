#include <iostream>
using namespace std;

class Base{
public:
    virtual void print(){
        cout<<"Base\n";
    }
};

class Derived : public Base{
public:
    void print() override{
        cout<<"Derived\n";
    }
};

int main(){
    Base* b = new Derived;
    b->print(); // Output : Derived
    delete b;

    return 0;
}