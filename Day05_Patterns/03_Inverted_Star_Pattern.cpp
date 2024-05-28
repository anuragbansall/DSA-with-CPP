#include <iostream>
using namespace std;

int main(){
    // print inverted star pattern using loops
    /*
        * * * *
        * * *
        * *
        *  
    */
   
    int n = 4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i+1); j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}