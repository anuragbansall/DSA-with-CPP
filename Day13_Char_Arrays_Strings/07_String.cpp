#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "hello";
    cout<<str<<"\n";

    // Input String
    string userName;
    cout<<"Hi, Enter your Name : ";
    // cin>>userName; // will not take value after space
    getline(cin, userName);
    // getline(cin, userName, '.'); // with delimiter
    cout<<"Hi, "<<userName<<"\n";

    // Output String using Loop
    string name = "anurag";
    for(int i=0; i<name.length(); i++){
        cout<<name[i];
    }
    cout<<"\n";

    return 0;
}