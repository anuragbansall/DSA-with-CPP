#include <iostream>
using namespace std;

int main(){
    // nested loops
    // loop inside a loop
    /*
        eg: Darw this pattern using loops
        1 1 1 1
        2 2 2 2
        3 3 3 3
        4 4 4 4
    */
    int n = 4;
    // outer loop
   for(int i=1;i<=n;i++){
    // inner loop
    for(int j=1;j<=n;j++){
        cout<<i<<" ";
    }
    cout<<"\n";
   }

    return 0;
}