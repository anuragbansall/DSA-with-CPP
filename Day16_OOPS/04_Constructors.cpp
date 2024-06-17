#include <iostream>
using namespace std;

class Car{
    string name;
    string color;

public:
    // Constructor Function
    // generally used for intialising value of properties at the time of object creation
    Car(string nameVal, string colorVal){
        name = nameVal;
        color = colorVal;
    }

    // Normal Functions
    void start(){
        cout<<"car has started ...\n";
    }
    void stop(){
        cout<<"car has stopped ...\n";
    }

    // getters
    string getName(){
        return name;
    }
    string getColor(){
        return color;
    }
};

int main(){
    Car c1("BMW", "White");
    cout<<c1.getName()<<"\n";
    cout<<c1.getColor()<<"\n";

    return 0;
}