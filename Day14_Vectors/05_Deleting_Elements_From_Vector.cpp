#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    cout<<"Size : "<<vec.size()<<"\n"; // Output : 5
    cout<<"Capacity : "<<vec.capacity()<<"\n"; // Output : 5

    // Deleting last element from vector using .pop_back();
    vec.pop_back();
    cout<<"Size : "<<vec.size()<<"\n"; // Output : 4
    cout<<"Capacity : "<<vec.capacity()<<"\n"; // Output : 5

    return 0;
}