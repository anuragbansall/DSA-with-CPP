#include <iostream>
using namespace std;

int main(){
    // print butterfly pattern
    /*
        *             * 
        * *         * * 
        * * *     * * * 
        * * * * * * * * 
        * * * * * * * * 
        * * *     * * * 
        * *         * * 
        *             * 
    */
    int n = 4;
    // butterfly pattern part 1    
    for(int i=1; i<=n; i++){
        // star
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        // space
        for(int j=1; j<=(n-i)*2; j++){
            cout<<"  ";
        }
        // star
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    // butterfly pattern part 2
    for(int i=1; i<=n; i++){
        // star
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }
        // space
        for(int j=1; j<=i*2-2;j++){
            cout<<"  ";
        }
        // star 
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }
        cout<<"\n"; 
    }

    return 0;
}