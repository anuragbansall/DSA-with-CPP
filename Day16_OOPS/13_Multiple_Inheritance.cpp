#include <iostream>
using namespace std;

class Teacher{
public:
    int salary;
    string subject;
};

class Student{
public:
    int rollNo;
    float cgpa;
};

class TA : public Teacher, public Student{
public:
    string name;
};

int main(){
    TA ta1;
    ta1.name = "Anurag";
    ta1.subject = "DSA";
    ta1.cgpa = 9.2;
    ta1.salary = 10000;
    ta1.rollNo = 23;

    cout<<"Name : "<<ta1.name<<"\nSubject : "<<ta1.subject<<"\nCGPA : "<<ta1.cgpa<<"\nSalary : "<<ta1.salary<<"\nRoll No : "<<ta1.rollNo<<"\n";

    return 0;
}