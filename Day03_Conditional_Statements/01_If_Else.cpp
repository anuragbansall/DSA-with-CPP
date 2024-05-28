#include <iostream>
using namespace std;

int main(){
    // if else
    // syntax : 
    /*
        if(condition){
            some work
        }else{
            some work
        }
    */
    int age;
    cout<<"enter your age : ";
    cin>>age;
    if(age>=18){
        cout<<"you can vote!\n";
    }else{
        cout<<"you can't vote\n";
    }

    float marks;
    cout<<"enter your marks : ";
    cin>>marks;
    if(marks>=33){
        cout<<"Result : Pass\n";
    }else{
        cout<<"Result : Fail\n";
    }

    // Practice Ques
    // print largest of two numbers
    int a, b;
    cout<<"enter numbers : ";
    cin>>a>>b;
    if(a>b){
        cout<<a<<"\n";
    }else{
        cout<<b<<"\n";
    }

    // print if number is odd or even
    int numb;
    cout<<"enter number : ";
    cin>>numb;
    if(numb%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
    
    return 0;
}