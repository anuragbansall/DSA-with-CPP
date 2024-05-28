#include <iostream>
using namespace std;

int main(){
    // print numbers from 1 to 5 usning while loop
    int n = 1;
    while(n<=5){
        cout<<n<<"\n";
        n++;
    }

    // calculate sum of n natural numbers
    int n2,sum=0,i=1;
    cout<<"enter n2 : ";
    cin>>n2;
    while(i<=n2){
        sum += i;
        i++;
    }
    cout<<"sum is "<<sum<<"\n";

    return 0;
}