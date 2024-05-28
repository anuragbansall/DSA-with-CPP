#include <iostream>
using namespace std;

int numberOfAll7s(int (*arr)[3], int n, int m);
int sumNumbers(int (*arr)[3], int n, int m);
int transposeMatrix(int (*arr)[3], int n, int m);

int main(){
    /*
        Question1 : Print the number of all 7’s that are in the 2d array.
        Example : 
        Input - int arr[][] = {{4,7,8},{8,8,7}}; n=2, m=3
        Output - 2
    */
    int arr1[][3] = {{4,7,8},{8,8,7}};
    int n1 = 2, m1 = 3;
    cout<<numberOfAll7s(arr1, n1, m1)<<"\n";

    /*
        Question2 : Print out the sum of the numbers in the second row of the “nums”array. 
        Example : 
        Input - int nums[][] = {{1,4,9},{11,4,3},{2,2,3}};
        Output - 18
    */

    int nums[][3] = {{1,4,9},{11,4,3},{2,2,3}};
    int n2 = 3, m2 = 3;
    cout<<sumNumbers(nums, n2, m2)<<"\n";

    /*
        Question3 : Write a program to Find Transpose of a Matrix.
        What is Transpose? Transpose of a matrix is the process of swapping the rows to columns. For a 2x3 matrix,
        Matrix
        a11 a12 a13 
        a21 a22 a23
        
        Transposed Matrix 
        a11 a21
        a12 a22
        a13 a23
    */
    
    int matrix[][3] = {{11,12,13},{21,22,23}};
    int n3 = 2, m3 = 3;
    transposeMatrix(matrix, n3, m3);


   return 0;
}

int numberOfAll7s(int (*arr)[3], int n, int m){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 7){
                count++;
            }
        }
    }

    return count;
}

int sumNumbers(int (*arr)[3], int n, int m){
    int sum = 0;
    for(int j=0; j<m; j++){
        sum += arr[1][j];
    }

    return sum;
}

int transposeMatrix(int (*arr)[3], int n, int m){
    int transposedMatrix[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            transposedMatrix[i][j] = arr[j][i];
        }
    }

    cout<<"Transposed Matrix :\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<transposedMatrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}