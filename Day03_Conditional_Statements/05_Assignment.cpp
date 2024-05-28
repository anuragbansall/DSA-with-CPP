#include <iostream>
using namespace std;

int main(){
    // Question1 : Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
    int n1;
    cout<<"enter number : ";
    cin>>n1;
    if(n1>0){
        cout<<"N is positive\n";
    }else if(n1<0){
        cout<<"N is negative\n";
    }else{
        cout<<"N is zero\n";
    }

    // Question2 : Write a C++ program that takes a year from the user and print whether that year is a leap year or not.
    int year;
    cout<<"enter year : ";
    cin>>year;
    if((year%400==0)){
        cout<<year<<" is a leap year\n";
    }else if((year%100 == 0)){
        cout<<year<<" is not a leap year\n";
    }else if(year%4==0){
        cout<<year<<" is a leap year\n";
    }else{
        cout<<year<<" is not a leap year\n";
    }

    // Question3 : output based ques ...

    // Question4 : output based ques ...

    // Question5 : For any 3 digit number check whether it’s an Armstrong number or not. Armstrong number is a number that is equal to the sum of cubes of its digits. Eg : 371 is an armstrong number. 3*3*3+7*7*7+1*1*1 = 371
    int n4,cube;
    cout<<"enter any 3 digit number : ";
    cin>>n4;
    int num = n4; // creating a copy
    int dig1 = num%10;
    num /= 10;
    int dig2 = num%10;
    num /= 10;
    int dig3 = num;

    int cubeSum = (dig1*dig1*dig1) + (dig2*dig2*dig2) + (dig3*dig3*dig3);
    if(cubeSum == n4){
        cout<<n4<<" is an armstrong number";
    }else{
        cout<<n4<<" is not an armstrong number";
    }

    return 0;
}