#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // vector of vectors

    // Accessing 2D Vector Elements

    // Using For Loop
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    // Using For-Of Loop
    for(vector<int> vec : matrix){
        for(int el : vec){
            cout<<el<<" ";
        }
        cout<<"\n";
    }

    return 0;
}