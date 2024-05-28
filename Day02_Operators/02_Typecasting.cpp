#include <iostream>
using namespace std;

int main(){
    // implicit conversion
    cout<<(10/3)<<endl; // output : 3
    cout<<(10/3.0)<<endl; // output : 3.33333
    cout<<('A'+1)<<endl; // output : 66 (65+1)

    // explicit conversion
    cout<<(int)('A')<<endl; // output : 65
    float pi = 3.14;
    cout<<(int)(pi)<<endl; // output : 3
    cout<<((float)10/3)<<endl; // output : 3.33333
    cout<<(char)(65)<<endl; // output : A
    return 0;
}