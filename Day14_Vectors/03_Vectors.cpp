#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1;
    cout<<"Size : "<<vec1.size()<<"\n"; // Output : 0

    vector<int> vec2 = {1, 2, 3, 4, 5};
    cout<<"Size : "<<vec2.size()<<"\n"; // Output : 5
    for(int i=0, n=vec2.size(); i<n; i++){
        cout<<vec2[i]<<" ";
    }
    cout<<"\n";

    vector<int> vec3(10, -1);
    cout<<"Size : "<<vec3.size()<<"\n"; // Output : 10
    for(int i=0, n=vec3.size(); i<n; i++){
        cout<<vec3[i]<<" ";
    }

    return 0;
}