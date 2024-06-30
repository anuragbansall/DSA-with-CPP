#include <iostream>
using namespace std;

class Complex{
    int real;
    int img;

public:
    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }
    void showComplex(){
        cout<<real<<" - "<<img<<"i\n";
    }

    Complex operator - (Complex &c2){
        int realAns = this->real - c2.real;
        int imgAns = this->img - c2.img;
        Complex c3(realAns, imgAns);
        return c3;
    }
};

class BankAccount{
    int accNum;
    float balance;

public:
    BankAccount(int accNum, int balance){
        this->accNum = accNum;
        this->balance = balance;
    }
    void deposit(int amount){
        this->balance += amount;
        cout<<amount<<" deposited successfully.\n";
    }
    void withdraw(int amount){
        this->balance -= amount;
        cout<<amount<<" withdraw successfully.\n";
    }
    float getBalance(){
        cout<<"Current Balance : "<<balance<<"\n";
        return balance;
    }
};

class Person{
protected:
    string name;
    int age;

public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
    int studentId;

public:
    Student(string name, int age, int studentId) : Person(name, age){
        this-> studentId = studentId;
    }

    void displayStudentInfo(){
        cout<<"name : "<<this->name<<"\n";
        cout<<"age : "<<this->age<<"\n";
        cout<<"id : "<<this->studentId<<"\n";
    }
};

int main(){
    /*
        Question1 : Create a class to store Complex numbers. Using operator overloading, create the logic to subtract one complex number from another.
        Note - In Complex numbers, the real part of 1st gets subtracted from the real part of 2nd number.
        Same goes for the imaginary part.
    */
    Complex c1(5, 2);
    Complex c2(2, 1);
    Complex c3 = c1-c2;
    c3.showComplex();

    /*
        Question2 : Create a class Bank Account with private attributes account Number and balance. Implement public methods deposit(), withdraw(), and get Balance() to manage the account.
    */
    BankAccount acc1(123, 50000);
    acc1.deposit(10000);
    acc1.withdraw(20000);
    acc1.getBalance();

    /*
        Question3 : Create a base class Person with attributes name and age. Derive a class Student from Person and add an additional attribute studentID. Implement a method displayStudentInfo() in the Student class to display all details. In main function Student class object will be created in this format : Student student("Alice", 20, "S12345");
        
        Note - When we initialize an object of a derived class, the base class part has to be constructed first. If we don't initialize it ourselves in the derived class' constructor by calling one of its constructors, the compiler will attempt to use the default constructor of the base class.
        To invoke the parent’s parameterized constructor in Child’s constructor, syntax is : Child(intx) : Parent(x)
        {......}
    */
        Student student("Anurag", 18, 12345);
        student.displayStudentInfo();
    
    return 0;
}