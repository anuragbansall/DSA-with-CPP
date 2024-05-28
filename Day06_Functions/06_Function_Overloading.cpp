#include <iostream>
using namespace std;

int sum(int a, int b);
int sum(int a, int b, int c);
double sum(double a, double b);

int main(){
    // function overloading
    // multiple functions with same name but different parameters.
    /*
        eg - we want to create three sum functions with same name 'sum' but with different type of arguments / different numbers of arguments.
    */

    sum(2,3); // output : 5
    sum(2,3,6); // output : 11
    sum(1.5, 2.5); // output : 4

    return 0;
}

int sum(int a, int b){
    cout<<a+b<<"\n";

    return a+b;
}

int sum(int a, int b, int c){
    cout<<a+b+c<<"\n";

    return a+b+c;
}

double sum(double a, double b){
    cout<<a+b<<"\n";

    return a+b;
}