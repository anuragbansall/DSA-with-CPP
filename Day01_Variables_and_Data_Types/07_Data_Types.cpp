#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // data types in c++

    // primitive data types (1byte = 8bits)
    // - integer (int) 4bytes
    // - character (char) 1byte
    // - Boolean (bool) 1byte
    // - floating point (float) 4bytes
    // - double floating point (double) 8bytes

    // non primitive data types
    // - arrays
    // - string

    // cout<<"size of datatype is "<<sizeof(datatype)<<endl; //this can be used to print thr size of any data type

    int age = 18;
    cout<<"size of age is "<<sizeof(age)<<endl; // output : 4

    int marks = 67;
    char grade = 'A';
    bool is_pass = true;
    float cgpa = 8.87;
    double percentage = 89.87896;

    // We can set the precision of float or double using setprision() included in <iomanip> header file.

    float PI = 3.121592653599867; 
    double PI2 = 3.121592653599867;

    cout<<setprecision(15)<<PI<<endl;
    cout<<setprecision(15)<<PI2<<endl;

    return 0;
}