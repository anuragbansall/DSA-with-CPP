#include <iostream>
using namespace std;

int main(){
    /*
        Question 1 : 
        Print the 0-1 Triangle Pattern.
        For n = 5 

        1 
        0 1 
        1 0 1 
        0 1 0 1 
        1 0 1 0 1 
    */

   int n1 = 5;
   bool val = true;
   for(int i=1; i<=n1; i++){
        for(int j=1; j<=i; j++){
            cout<<val<<" ";
            val = !val;
        }
        cout<<"\n";
   }

    cout<<"\n";

   /*
    Question 2 : 
    Print the Rhombus Pattern.
    For n = 5 

         * * * * * 
        * * * * * 
       * * * * * 
      * * * * * 
     * * * * * 
   */
  int n2 = 5;
  for(int i=1; i<=n2; i++){
    // space - 4 3 2 1
    for(int j=1; j<=(n2-i);j++){
        cout<<" ";
    }
    // stars
    for(int j=1; j<=n2; j++){
        cout<<"* ";
    }
    cout<<"\n";
  }
    
    cout<<"\n";

    /*
        Question 3 : 
        Print the Palindromic Pattern with Numbers.
        For n = 5
                1
              2 1 2
            3 2 1 2 3        
          4 3 2 1 2 3 4
        5 4 3 2 1 2 3 4 5

    */
    
    int n3 = 5;
    for(int i=1; i<=n3; i++){
        // spaces - 4 3 2 1 0
        for(int j=1; j<=(n3-i); j++){
            cout<<"  ";
        }
        // numbers backward
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }

        // numbers forward
        for(int j=2; j<=i; j++){
            cout<<j<<" ";
        }

        cout<<"\n";
    }

    return 0;
}