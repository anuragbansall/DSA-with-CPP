#include <iostream>
using namespace std;

class Student{
// by default private:
    string name;
    float cgpa;

public:
    void getPercentage(){
        cout<<cgpa*10<<"\n";
    }

    // Setters
    void setName(string nameValue){
        name = nameValue;
    }
    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }
    
    // Getters
    string getName(){
        return name;
    }
    float getCgpa(){
        return cgpa;
    }
};

int main(){
    Student s1;
    s1.setName("Anurag");
    s1.setCgpa(8.1);
    cout<<s1.getName()<<"\n";
    cout<<s1.getCgpa()<<"\n";

    return 0;
}