#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of array : ";
    cin>>n;

    int marks[n];

    // input values
    for(int i=0; i<n; i++){
        cout<<"Enter marks "<<i+1<<" : ";
        cin>>marks[i];
    }

    cout<<"You Enterd : ";
    // ouput values
    for(int i=0; i<n; i++){
        cout<<marks[i]<<" ";
    }
    cout<<"\n";

    return 0;
}