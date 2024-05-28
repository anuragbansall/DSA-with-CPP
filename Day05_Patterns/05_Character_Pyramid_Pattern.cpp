#include <iostream>
using namespace std;

int main(){
    // print character pyramid pattern
    /*
        A 
        B C
        D E F
        G H I J
    */
    int n = 4;
    char c = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<c<<" ";
            c++;
        }
        cout<<"\n";
    }

    return 0;
}