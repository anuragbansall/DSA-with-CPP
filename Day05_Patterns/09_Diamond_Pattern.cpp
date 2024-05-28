#include <iostream>
using namespace std;

int main(){
    // print diamond pattern
    /*
              * 
            * * *
          * * * * *
        * * * * * * *
        * * * * * * *
          * * * * *
            * * *
              *
    */

   int n = 4;

        // 1st traingle
   for(int i=1; i<=n;i++){
        // space
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        // star
        
        for(int j=1; j<=i*2-1;j++){
            cout<<"* ";
        }
        cout<<"\n";
   }

        // 2nd triangle
        for(int i=1; i<=n; i++){
            // space
            for(int j=1; j<=i-1;j++){
                cout<<"  ";
            }
            // star
            for(int j=1;j<=2*(n-i)+1;j++){
                cout<<"* ";
            }
            cout<<"\n";
        }    

    return 0;
}