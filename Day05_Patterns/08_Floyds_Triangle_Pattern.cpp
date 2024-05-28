#include <iostream>
using namespace std;

int main(){
    // print floyd's triangle pattern
    /*
        1  
        2  3  
        4  5  6  
        7  8  9  10 
        11 12 13 14 15
    */

    int n = 5;
    int count = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            if(count/10 == 0){
                cout<<" ";
            }
            count++;
        }
        cout<<"\n";
    }

    return 0;
}