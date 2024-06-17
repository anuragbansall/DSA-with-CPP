#include <iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"Eating...\n";
    }
    void breath(){
        cout<<"Breathing...\n";
    }
};

class Fish : public Animal{
public:
    void swim(){
        cout<<"Swimming...\n";
    }
};

class Mammal : public Animal{
public:
    void walk(){
        cout<<"Walking...\n";
    }
};

int main(){
    Fish f1;
    f1.eat();
    f1.breath();
    f1.swim();

    cout<<"\n";

    Mammal m1;
    m1.eat();
    m1.breath();
    m1.walk();

    return 0;
}