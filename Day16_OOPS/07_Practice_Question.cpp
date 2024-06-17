#include <iostream>
using namespace std;

class User{
    int id;
    string password;

public:
    string username;

    // Constructor
    User(int id){
        this->id = id;
    }
    // Getter for password
    string getPassword(){
        return password;
    }
    // Setter for password
    void setPassword(string password){
        this->password = password;
    }
};

int main(){
    /*
        Question: Create a User class with properties : id(private), username(public) & password(private).
        Its id should be initialized in a parametarised constructor.
        It should have Getter and Setter for pasword.
    */
    User u1(100);
    u1.username = "Anurag Bansal";
    u1.setPassword("123@anurag");
    cout<<"Username : "<<u1.username<<"\n";
    cout<<"User Password : "<<u1.getPassword()<<"\n";

    return 0;
}