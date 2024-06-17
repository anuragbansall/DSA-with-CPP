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

class Mammal : public Animal{
public:
    string bloodType;
    Mammal(){
        bloodType = "warm";
    }
};

class  Dog : public Mammal{
public:
    void bark(){
        cout<<"bark bark...";
    }
};

int main(){
    Dog d1;
    d1.eat();
    d1.breath();

    return 0;
}