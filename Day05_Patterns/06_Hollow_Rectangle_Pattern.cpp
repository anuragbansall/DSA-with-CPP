#include <iostream>
using namespace std;

int main(){
    // print hollow rectangle pattern
    /*
        * * * * *
        *       *
        *       *
        * * * * *
    */
    int n = 4;
    for(int i=1;i<=n;i++){
        cout<<"* ";
        for(int j=1;j<=n-1;j++){
            if(i==1 || i==n){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<"* ";
        cout<<"\n";
    }

    return 0;
}