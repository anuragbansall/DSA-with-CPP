#include <iostream>
using namespace std;

void searchInMatrix(int mat[][4], int n, int m, int key);

int main(){
    int mat[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int n = 4;
    int m = 4;
    int key = 33;

    searchInMatrix(mat, n, m, key);

    return 0;
}

void searchInMatrix(int mat[][4], int n, int m, int key){
    int row = 0;
    int column = m-1;
    while(row<n && column>=0){
        int cell = mat[row][column];
        if(cell == key){
            cout<<"key Found!";
            return;
        }else if(cell>key){
            // left
            column--;
        }else{
            // down
            row++;
        }
    }
    cout<<"Not Found!";
}