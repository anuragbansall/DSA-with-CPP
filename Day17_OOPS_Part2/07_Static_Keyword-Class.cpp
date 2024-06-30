#include <iostream>
using namespace std;

// static variable in class
class Example{
public:
    static int x;
};

int Example::x = 0; // Intialisation of class attribute/variable
// :: is a scope operator

int main(){
    Example ex1;
    cout<<ex1.x++<<"\n"; // Output : 0

    Example ex2;
    cout<<ex2.x++<<"\n"; // Output : 1

    Example ex3;
    cout<<ex3.x++<<"\n"; // Output : 2

    return 0;
}