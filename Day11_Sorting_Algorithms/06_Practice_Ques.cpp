#include <iostream>
using namespace std;

void insertionSort(char *arr, int n);

int main(){
    /*
        Ques : Sort this array of characters using insertion sort in descending order.
        char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'}
    */

    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(ch)/sizeof(ch[0]);

    cout<<"Array Before Inserion Sort : ";
    for(int i=0; i<n; i++){
        cout<<ch[i]<<" ";
    }
    cout<<"\n";

    insertionSort(ch, n);

    cout<<"Array After Insertion Sort (Descending) : ";
    for(int i=0; i<n; i++){
        cout<<ch[i]<<" ";
    }
    cout<<"\n";

    return 0;
}

void insertionSort(char *arr, int n){
    for(int i=1; i<n; i++){
        char curr = arr[i];
        char prev = i-1;
        while(prev>=0 && arr[prev]<curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
    }
}