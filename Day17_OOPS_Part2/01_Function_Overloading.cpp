#include <iostream>
using namespace std;
// Function Overloading - Compile Time Polymorphism
class Print{
public:
    void show(int n){
        cout<<"int : "<<n<<"\n";
    }
    void show(string str){
        cout<<"string : "<<str<<"\n";
    }
};

int main(){
    Print p1;
    p1.show(2); // Output : int : 2
    p1.show("Anurag"); // Output : int : Anurag

    return 0;
}