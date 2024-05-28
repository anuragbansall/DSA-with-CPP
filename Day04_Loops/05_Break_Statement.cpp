#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=10;i++){
        if(i>5){
            break;
        }
        cout<<i<<" ";
    }
    cout<<"\n";

    // WAP where user can keep entering numbers till they enter a multiple of 10
    int n;
    while(true){
        cout<<"enter n : ";
        cin>>n;
        if(n%10==0){
            break;
        }
    }

    return 0;
}