#include <iostream>
using namespace std;

// Hybrid Inheritance is a combination of different types of inheritance
class Person {
public:
    string name;
    int age;
    void display() {
        cout << "Name : " << name << "\n";
        cout << "Age : " << age << "\n";
    }
};

class Student : public Person {
public:
    int studentID;
    void display() {
        cout << "Name : " << name << "\n";
        cout << "Age : " << age << "\n";
        cout << "Student ID : " << studentID << "\n";
    }
};

class Employee : public Person {
public:
    int employeeID;
    void display() {
        cout << "Name : " << name << "\n";
        cout << "Age : " << age << "\n";
        cout << "Employee ID : " << employeeID << "\n";
    }
};

class WorkingStudent : public Student, public Employee {
public:
    void showDetails() {
        Student::display();
        Employee::display(); 
    }
};

int main() {
    WorkingStudent ws1;
    ws1.Student::name = "Anurag Bansal";
    ws1.Student::age = 21;
    ws1.studentID = 12345;
    ws1.Employee::name = "Anurag Bansal";
    ws1.Employee::age = 18;
    ws1.employeeID = 54321;

    ws1.showDetails();

    return 0;
}
