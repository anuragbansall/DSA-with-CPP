#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        string gender;
        int *age;

        // Constructor
        Person(string name, string gender){
            this-> name = name;
            this->gender = gender;

            age = new int;
            *age = 18;
        }

        // Copy Constructor
        Person(Person &original){
            name = original.name;
            gender = original.gender;
            age = original.age;
        }
};

int main(){
    Person p1("Anurag","Male");
    Person p2(p1);
    *p2.age = 19;
    cout<<*(p1.age)<<"\n"; // Output : 19
    cout<<*(p2.age)<<"\n"; // Output : 19
    // As p2.age has same reference of p1.age, any change in p2.age will affect p1.age

    return 0;
}