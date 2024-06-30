#include <iostream>
using namespace std;
// Virtual Functions - Run Time Polymorphism
class Parent{
public:
    virtual void hello(){
        cout<<"Parent Hello\n";
    }    
};

class Child : public Parent{
public:
    // Redefining (without virtual keyword)
    void hello(){
        cout<<"Child Hello\n";
    }   
};

int main(){
    Child c1;
    Parent* ptr;

    ptr = &c1; // Run time binding
    ptr->hello(); // Virtual Function

    return 0;
}