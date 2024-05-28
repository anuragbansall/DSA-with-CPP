#include <iostream>
using namespace std;

int main(){
    // Question 1
    // In a program, input the side of a square.You have to output the area of the square.
    // Input : n(side) 
    // Output:n*n(area)

    int sideOfRectangle;
    cout<<"enter side : ";
    cin>>sideOfRectangle;

    int areaOfRectangle = sideOfRectangle*sideOfRectangle;
    cout<<"area is "<<areaOfRectangle<<endl;

    // Question 2
    // Enter cost of 3 items from the user (using float datatype)- a pencil,a pen and an eraser.You have to output the total cost of the items back to the user as their bill.
    // (Addon : You can also try adding 18% GST tax to the items in the bill as an advanced problem)

    float pencilCost, penCost, eraserCost;

    cout<<"enter pencil cost : ";
    cin>>pencilCost;
    cout<<"enter pen cost : ";
    cin>>penCost;
    cout<<"enter eraser cost : ";
    cin>>eraserCost;

    float total_cost = pencilCost + penCost + eraserCost;

    cout<<"your total bill is "<<total_cost<<endl;
    cout<<"your total bill with gst is (18%) "<<(total_cost+(total_cost * 0.18))<<endl;

    // Question 3
    // Build a Simple Interest Calculator. 
    // Input : principal(P), rate(R), time(T)
    // Output : (P*R*T)/100
    
    float principal, rate, time;

    cout<<"enter principal(p) : ";
    cin>>principal;
    cout<<"enter rate(r) : ";
    cin>>rate;
    cout<<"enter time(t) : ";
    cin>>time;

    float si = (principal*rate*time)/100;
    cout<<"simple interest is "<<si<<endl;

    // Question 4
    // Write a program to calculate the area of a circle.
    // Input : r(radius)
    // Output : PI*r*r(area)
    float pi = 3.14;
    float radiusOfCircle;

    cout<<"enter radius : ";
    cin>>radiusOfCircle;

    float areaOfCircle = pi*radiusOfCircle*radiusOfCircle;
    cout<<"area of circle is "<<areaOfCircle<<endl;

    return 0;
}
