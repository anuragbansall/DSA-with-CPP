#include <iostream>
using namespace std;

class Animal{
public:
    string color;
    void eat(){
        cout<<"Eating...\n";
    }
    void breath(){
        cout<<"Breathing...\n";
    }
};

class Fish : public Animal{
public:
    int fins;
    void swim(){
        cout<<"Swimming...\n";
    }
};

int main(){
    Fish f1;
    f1.breath();

    return 0;
}