#include <iostream>
using namespace std;

// class
class Student{
    // Properties
    string name;
    float cgpa;
    // Methods
    void getPercentage(){
        cout<<cgpa*10<<"\n";
    }
};

int main(){
    Student s1; // Object - it will allocate some memory to s1
    cout<<sizeof(s1)<<"\n";

    return 0;
}