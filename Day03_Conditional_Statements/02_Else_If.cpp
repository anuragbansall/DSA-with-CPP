#include <iostream>
using namespace std;

int main(){
    // else if
    // syntax
    /*
        if(condition){
            some work
        }else if(condition){
            some work
        }else{
            some work
        }
    */

    float marks;
    cout<<"enter marks : ";
    cin>>marks;

    if(marks>=90){
        cout<<"A\n";
    }else if(marks>=80){
        cout<<"B\n";
    }else{
        cout<<"C\n";
    }

    // practice ques
    // create an income tax calculator
    /*
        income<5L
        0% tax

        income between 5-10L
        20% tax

        1ncome >10L
        30% tax
    */

   int income;
   double tax;
   cout<<"enter your income (in lakhs) : ";
   cin>>income;
    if(income<5){
        tax = 0;
    }else if(income<=10){
        tax = 0.2 * income;
    }else{
        tax = 0.3 * income;
    }

    cout<<"tax = "<<tax*100000<<"\n";

    // print the largest of three numbers
    int a, b ,c;
    cout<<"enter all three numbers : ";
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<a<<"\n";
    }else if(b>=c){
        cout<<b<<"\n";
    }else{
        cout<<c<<"\n";
    }

    return 0;
}