#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    // input marks1
    cout<<"enter marks 1 ";
    cin>>a;

    // input marks2
    cout<<"enter marks 2 ";
    cin>>b;

    // input marks3
    cout<<"enter marks 3 ";
    cin>>c;

    // calculate average marks
    int avg = (a+b+c)/3;
    cout<<"average is "<<avg<<endl;

    // note : integer divided by integer is also integer
    // ex - 5/2 will be 2 not 2.5.

    // but if we want exact value i.e. with decimal value we can make follwing vaiables of float type
    // float a, float b, float c, float avg .

    return 0;
}