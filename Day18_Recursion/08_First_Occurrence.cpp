#include <iostream>
#include <vector>
using namespace std;

// WAF to find first occurence of an element in a vector.
int firstOcuur(vector<int> vec, int target, int i);

int main(){
    vector<int> vec = {1, 2, 3, 4, 3, 4, 2, 6};
    cout<<firstOcuur(vec, 3, 0)<<"\n";  // Output : 2
    cout<<firstOcuur(vec, 8, 0)<<"\n"; // Output : -1

    return 0;
}

int firstOcuur(vector<int> vec, int target, int i){
    if(i == vec.size()){
        return -1;
    }
    if(vec[i] == target){
        return i;
    }

    return firstOcuur(vec, target, i+1);
}