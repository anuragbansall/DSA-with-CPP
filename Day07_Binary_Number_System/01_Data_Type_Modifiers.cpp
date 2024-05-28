#include <iostream>
using namespace std;

int main(){
    /*
        Data Type Modifiers : 
            Alter the meaning of existing data types.
        
        long : >= 4 bytes (more than int) [int, double]
        short : 2 bytes
        signed : signed int is same as int
        unsigned : can only store non negative numbers.
        long long : same as long long int.
    */
    cout<<"\n";

    cout<<"int : "<<sizeof(int)<<"\n"; // 4
    cout<<"long int : "<<sizeof(long int)<<"\n"; // 4
    cout<<"double : "<<sizeof(double)<<"\n"; // 8
    cout<<"long double : "<<sizeof(long double)<<"\n"; // 12

    cout<<"\n";

    cout<<"int : "<<sizeof(int)<<"\n"; // 4
    cout<<"short int : "<<sizeof(short int)<<"\n"; // 2

    cout<<"\n";

    
    cout<<"int : "<<sizeof(int)<<"\n"; // 4
    cout<<"signed int : "<<sizeof(signed int)<<"\n"; // 4
    
    cout<<"\n";

    cout<<"int : "<<sizeof(int)<<"\n"; // 4
    cout<<"unsigned int : "<<sizeof(unsigned int)<<"\n"; // 4

    cout<<"\n";

    cout<<"int : "<<sizeof(int)<<"\n"; // 4
    cout<<"long int : "<<sizeof(long int)<<"\n"; // 4
    cout<<"long long int : "<<sizeof(long long int)<<"\n"; // 8

    cout<<"\n";

    // we can also use multiple modifiers : 
    unsigned short int age = 18; // output : 18;
    cout<<age<<"\n";

    return 0;
}