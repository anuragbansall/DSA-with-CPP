#include <iostream>
using namespace std;
// Function Overriding - Run Time Polymorphism
class Parent{
public:
    void show(){
        cout<<"Parent\n";
    }
};

class Child : public Parent{
public:
    void show(){
        cout<<"Child\n";
    }
};

int main(){
    Child c1;
    c1.show();  // Output : Child
     
    return 0;
}