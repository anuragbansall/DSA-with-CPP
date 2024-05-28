#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=10;i++){
        if(i==6){
            continue;
        }
        cout<<i<<" ";
    }
    cout<<"\n";
    
    // WAP to show numbers entered by user except multiple of 10
    int n;
    while(true){
        cout<<"enter n : ";
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"you entered : "<<n<<"\n";
    }

    return 0;
}