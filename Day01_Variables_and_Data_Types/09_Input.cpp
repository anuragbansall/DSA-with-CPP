#include <iostream>
using namespace std;

int main(){
    // how to take input from the user
    int age;
    cout<<"what's your age? ";
    cin>>age; //will take value from user in terminal
    cout<<"your age is "<<age<<endl;

    // calculate sum of two numbers a & b.
    int a;
    int b;

    // input a
    cout<<"enter a ";
    cin>>a;

    // input b
    cout<<"enter b ";
    cin>>b;

    // calculate sum
    int sum = a+b;
    cout<<"sum is "<<a+b<<endl;

    return 0;
}