#include <iostream>
using namespace std;

int sum(int a, int b=1);  // a and b are parameters // b has default value = 1

int main(){
    // functions with parameters syntax
    /*
        returnType funcName(type param1, type param2 ...){
            // do some work
            return someVal;
        }
    */

   cout<<sum(2,3)<<endl;  // output : 5;
   cout<<sum(2)<<endl; // output : 3;

    return 0;
}

int sum(int a, int b){
    int sum = a+b;
    return sum;
}