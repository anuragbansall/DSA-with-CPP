#include <iostream>
using namespace std;

int main(){
    // do while loop
    // syntax :
    /*
        do{
            // do some work 
        }while(condition);
        
        // work gets done atleast once irrespective of condition 
    */

    // print numbers from 1 to 5 using do while loop
    int n=1;
    do{
        cout<<n<<" ";
        n++;
    }while(n<=5);
    cout<<"\n";
    
    return 0;
}