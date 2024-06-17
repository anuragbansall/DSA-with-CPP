#include <iostream>
using namespace std;

class Person{
public:
    string name;
    string gender;
    int* age;
    // constructor
    Person(string name, string gender){
        this->name = name;
        this->gender = gender;
        age = new int;
        *age = 18;
    }

    // Destructor
    ~Person(){
        cout<<"Deleting Object.\n"; 
        if(age!=NULL){
            delete age;
            age = NULL;
        }
        // Remaining attributes will automatically deleted with default Destructor.As they are created in Static Memory.
    }
};

int main(){
    Person p1("Anurag", "Male");
    cout<<p1.name<<"\n";
    cout<<p1.gender<<"\n";
    cout<<*(p1.age)<<"\n";

    return 0;
}