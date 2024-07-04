#include <iostream>
#include <vector>
using namespace std;

// WAF to find last occurence of an element in a vector.
int lastOcuur(vector<int> vec, int target, int i);

int main(){
    vector<int> vec = {1, 2, 3, 4, 3, 4, 2, 6};
    cout<<lastOcuur(vec, 3, 0)<<"\n";  // Output : 4
    cout<<lastOcuur(vec, 8, 0)<<"\n"; // Output : -1

    return 0;
}

int lastOcuur(vector<int> vec, int target, int i){
    if(i == vec.size()){
        return -1;
    }

    int idxFound = lastOcuur(vec, target, i+1);
    if(idxFound == -1 && vec[i] == target){
        return i;
    }

    return idxFound;
}