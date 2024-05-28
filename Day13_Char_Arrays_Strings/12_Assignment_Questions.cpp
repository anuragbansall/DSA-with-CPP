#include <iostream>
#include <string>
using namespace std;

int countVowels(string str);
bool isSwapStringEqual(string str1, string str2);

int main(){
    /*
        Question1 : Count how many times lower case vowels occurred in a String entered by the user.
    */
    cout<<countVowels("anurag")<<"\n"; // Output : 3

    /*
        Question2 : You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.
        
        Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings.
        Otherwise, return false.
        Example : 
        Input : s1 = "bank", s2 = "kanb"
        Output : true
        Explanation : For example,swap the first character with the last character of s2 to make "bank".
    */

    cout<<isSwapStringEqual("bank", "kanb")<<"\n";

    return 0;
}

int countVowels(string str){
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == '0' || str[i] == 'u'){
            count++;
        }
    }

    return count;
}

bool isSwapStringEqual(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }

    char diffChar1, diffChar2;
    int diff = 0;
    for(int i=0; i<str1.length(); i++){
        if(str1[i] != str2[i]){
            if(diff == 0){
                diffChar1 = str1[i];
                diffChar2 = str2[i];
            }else{
                if(str1[i] != diffChar2 || str2[i] != diffChar1){
                    return false;
                }
            }
            diff++;
        }
        if(diff>2){
            return false;
        }
    }
    if(diff == 1){
        return false;
    }

    return true;
}