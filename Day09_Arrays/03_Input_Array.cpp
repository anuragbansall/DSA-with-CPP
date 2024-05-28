#include <iostream>
using namespace std;

int main(){
    int marks[5];
    int n = sizeof(marks)/sizeof(int);

    for(int i=0; i<n; i++){
        cout<<"Enter val "<<i+1<<" : ";
        cin>>marks[i];
    }

    cout<<"You Entered : ";
    for(int i=0; i<n; i++){
        cout<<marks[i]<<" ";
    }
    cout<<"\n";

    return 0;
}