#include <iostream>
using namespace std;

void func(int mat[][4], int n, int m);
void func2(int (*mat)[4], int n, int m);

int main(){
    int mat[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    cout<<mat<<"\n";
    cout<<mat+1<<"\n";
    cout<<*(*(mat+1)+1)<<"\n"; // output : 25

    return 0;
}

void func(int mat[][4], int n, int m){
    // ...
}

void func2(int (*mat)[4], int n, int m){
    // ...
}

// Both are same.