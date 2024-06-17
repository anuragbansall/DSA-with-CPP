#include <iostream>
using namespace std;

// Two Types of Constructors are : 
// 1. Non-Parametarized Constructor
// 2. Parametarized Constructor - used for initialization
// 3. Copy Constructor - Special Constructor(default) used to copy properties of one object into another.

class Person{
    string name;
    string gender;

public:
    // Non-Parametarized Constructor
    Person(){
        cout<<"This is non-parametarized constructor\n";
    }
    // Parametarized Constructor
    Person(string name, string gender){
        this-> name = name;
        this->gender = gender;

        cout<<"This is parametarized constructor\n";
    }
    // Copy Constructor - Customized
    Person(Person &original){
        cout<<"Copying original to new ...\n";
        name = original.name;
        gender = original.gender;
    }
};

int main(){
    Person p1; // non-parametarized constructor
    Person p2("Anurag", "male"); // parametarized constructor
    Person p3(p2);
    
    return 0;
}