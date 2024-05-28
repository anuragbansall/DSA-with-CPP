#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Anurag Bansal";
    
    // str.length()
    cout<<str.length()<<"\n"; // Output : 13

    // str.at() 
    cout<<str.at(0) <<"\n"; // Output : A
    cout<<str.at(7) <<"\n"; // Output : B

    // str.substr()
    cout<<str.substr(0,6)<<"\n"; // Output : Anurag
    cout<<str.substr(7,6)<<"\n"; // Output : Bansal

    // str.find()
    cout<<str.find("Anurag")<<"\n";  // Output : 0
    cout<<str.find("Bansal")<<"\n";  // Output : 7
    cout<<str.find("n")<<"\n"; // Output : 1
    cout<<str.find("n", 7)<<"\n"; // Output : 9
    cout<<str.find("Aarav")<<"\n"; // Output : 4294967295 // 4294967295 == -1

    return 0;
}