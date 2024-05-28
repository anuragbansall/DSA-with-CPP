#include <iostream>
using namespace std;

int main(){
    // creating array
    
    // way 1
    int marks[50];
    marks[0] = 80;
    marks[1] = 70;
    marks[2] = 90;
    // ....
    cout<<"size of marks : "<<sizeof(marks)<<"\n"; // output : 50*4 = 200
    cout<<"length of marks : "<<sizeof(marks)/sizeof(int)<<"\n"; // output : 200/4 = 50

    // way 2
    int marks2[50] = {80, 70, 90,/*....*/};
    cout<<"size of marks2 : "<<sizeof(marks2)<<"\n"; // output : 50*4 = 200
    cout<<"length of marks2 : "<<sizeof(marks2)/sizeof(int)<<"\n"; // output : 200/4 = 50

    // way 3
    int marks3[] = {80, 70, 90, /*....*/};
    cout<<"size of marks3 : "<<sizeof(marks3)<<"\n"; // output : 3*4 = 12
    cout<<"length of marks3 : "<<sizeof(marks3)/sizeof(int)<<"\n"; // output : 12/4 = 3

    return 0;
}