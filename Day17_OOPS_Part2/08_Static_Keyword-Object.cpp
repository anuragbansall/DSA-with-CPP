#include <iostream>
using namespace std;

class Example{
public:
    Example(){
        cout<<"Constructor...\n";
    }
    ~Example(){
        cout<<"Destructor...\n";
    }
};

int main(){
    int a = 0;
    if(a==0){
        static Example ex1; // Static Object
    }

    cout<<"Code Ending...\n";
    return 0;
}