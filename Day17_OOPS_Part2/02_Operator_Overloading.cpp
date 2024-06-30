#include <iostream>
using namespace std;
// Operator Overloading - Compile Time Polymorphism
class Complex{
    int real;
    int img;

public:
    // Constructor - for intialisation
    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    void showNum(){
        cout<<real<<" + "<<img<<"i\n";
    }

    // Operator Function
    Complex operator + (Complex &c2){
        int realAns = this->real + c2.real;
        int ImgAns = this->img + c2.img;

        Complex c3(real, ImgAns);
        return c3;
    }
};

int main(){
    /* 
        For Example : Complex Number
        C1 = 1 + 2i
        C2 = 3 + 4i
        C1 + C2 = C3
        C3 = 4 + 6i
    */

    Complex c1(1, 2);
    Complex c2(3, 4);

    c1.showNum();
    c2.showNum();

    Complex c3 = c1+c2;
    c3.showNum();

    return 0;
}