#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4};
    cout<<"Size : "<<vec.size()<<"\n"; // Output : 4
    cout<<"Capacity : "<<vec.capacity()<<"\n"; // Output : 4

    // Adding New Element using .push_back()
    vec.push_back(5);
    cout<<"Size : "<<vec.size()<<"\n"; // Output : 5
    cout<<"Capacity : "<<vec.capacity()<<"\n"; // Output : 8

    return 0;
}