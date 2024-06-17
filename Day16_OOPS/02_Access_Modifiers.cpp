#include <iostream>
using namespace std;

class Student{
    private:
        float id;
    public:
        string name;
        float cgpa;
        void getPercentage(){
            cout<<cgpa*10<<"\n";
        }
};

int main(){
    Student s1;
    s1.name = "Anurag";
    cout<<s1.name<<"\n"; // Output : Anurag
    s1.cgpa = 8;
    s1.getPercentage();

    return 0;
}