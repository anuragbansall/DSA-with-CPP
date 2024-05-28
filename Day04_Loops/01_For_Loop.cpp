#include <iostream>
using namespace std;

int main(){
    // for loop
    // syntax :
    /*
        for(intialisation, condition, updation){
            // do some work
        }
    */

    // print numbers from 1-5 using for loop
    for(int i=1;i<=5;i++){ // loop runs while condition is true.
        cout<<i<<"\n";
    }    

    // print "apna college" 5 times
    for(int i=0;i<5;i++){
        cout<<"apna college"<<"\n";
    }

    // print numbers from 1 to n
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<"\n";
    }

    // print sum of n natural numbers
    int n2,sum=0;
    cout<<"enter n2 : ";
    cin>>n2;
    for(int i=1;i<=n2;i++){
        sum += i;
    }
    cout<<"sum is "<<sum<<"\n";

    return 0;
}