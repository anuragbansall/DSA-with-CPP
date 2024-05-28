#include <iostream>
using namespace std;

int main(){
    char word[10];
    // cout<<"Enter Word : ";
    // cin>>word;
    // cout<<"You Entered "<<word<<"\n";

    char sentence[100];
    cout<<"Enter Sentence : ";
    cin.getline(sentence, 100, '.');
    cout<<"You Enter : "<<sentence<<"\n";

    return 0;
}