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
            age = new int;
            *age = *(original.age); // deep copy
        }
};

int main(){
    Person p1("Anurag","Male");
    Person p2(p1);
    *p2.age = 19;
    cout<<*(p1.age)<<"\n"; // Output : 18
    cout<<*(p2.age)<<"\n"; // Output : 19
    // now any change made in p2.age will not affect p1.age as both object age has different reference

    return 0;
}