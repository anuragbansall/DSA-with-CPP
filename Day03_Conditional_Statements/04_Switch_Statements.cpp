#include <iostream>
using namespace std;

int main(){
    // switch statement
    // syntax :
    /*
        switch(variable){
            case 1:
                do some work;
                break;
            case 2:
                do some work;
                break;
            default:
                do some work;
        }
    */

   int day;
   cout<<"enter day : ";
   cin>>day;
   switch(day){
    case 1 : 
            cout<<"monday\n";
            break;
    case 2 : 
            cout<<"tuesday\n";
            break;
    case 3 : 
            cout<<"wednesday\n";
            break;
    case 4 : 
            cout<<"thursday\n";
            break;
    case 5 : 
            cout<<"friday\n";
            break;   
    case 6 : 
            cout<<"saturday\n";
            break;
    case 7 : 
            cout<<"sunday\n";
            break;
    default :
            cout<<"invalid\n";                                             
   }

   
    // basic arithmatic calculator
    int a,b,res;
    char op;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    cout<<"select operator (+, -, *, /) : ";
    cin>>op;

    switch(op){
        case '+' :
                res = a+b;
                break;
        case '-' :
                res = a-b;
                break;
        case '*' :
                res = a*b;
                break;
        case '/' :
                res = a/b;
                break;
        default : 
                cout<<"invalid operator\n";
    }
    cout<<res<<'\n';

    return 0;
}