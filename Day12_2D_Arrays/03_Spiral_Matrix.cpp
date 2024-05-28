#include <iostream>
using namespace std;

void spiralMatrix(int arr[][4], int n, int m);

int main(){
    const int n = 4, m = 4;
    int arr[n][m] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};

    spiralMatrix(arr, n, m);

    return 0;
}

void spiralMatrix(int arr[][4], int n, int m) {
    int srow = 0;
    int scol = 0;
    int erow = n - 1;
    int ecol = m - 1;

    while (srow <= erow && scol <= ecol) {
        // top
        for (int j = scol; j <= ecol; j++) {
            cout << arr[srow][j] << " ";
        }
        srow++;

        // right
        for (int i = srow; i <= erow; i++) {
            cout << arr[i][ecol] << " ";
        }
        ecol--;

        // bottom
        for (int j = ecol; j >= scol; j--) {
            if(srow == erow){ // middle
                break;
            }
            cout << arr[erow][j] << " ";
        }
        erow--;

        // left
        for (int i = erow; i >= srow; i--) {
            if(scol == ecol){ // middle
                break;
            }
            cout << arr[i][scol] << " ";
        }
        scol++;
        
    }
}
