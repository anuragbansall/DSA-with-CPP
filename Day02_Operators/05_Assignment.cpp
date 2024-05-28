#include <iostream>
using namespace std;

int main(){
    // Question1 : What’ll be the output of the following programs : 
    // A.
    int xa=2, ya=5;
    int exp1a = (xa*ya/xa); // 2*5/2 = 5
    int exp2a = (xa*(ya/xa)); // 2*(5/2) = 4
    cout<<exp1a<<","; // output : 5
    cout<<exp2a<<"\n"; // output : 4
    // output : 5,4

    // B.
    int xb=10, yb=5;
    int exp1b = (yb*(xb/yb+xb/yb)); // (5*(10/5+10/5)) = 20
    int exp2b = (yb*xb/yb+yb*xb/yb); // (5*10/5+5*10/5) = 20
    cout<<exp1b<<",";
    cout<<exp2b<<"\n";
    // output : 20,20

    // C.
    int xc=200,yc=50,zc=100;
    if(xc>yc&&yc>zc){ // give us false
        cout<<"Hello\n";
    }
    if(zc>yc&&zc<xc){ // give use true
        cout<<"C++\n";  
    }
    if((yc+200)<xc&&(yc+150)<zc){ // give us false
        cout<<"HelloC++\n";
    } 
    // output : C++

    return 0;
}