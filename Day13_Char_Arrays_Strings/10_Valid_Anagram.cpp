#include <iostream>
#include <string>
using namespace std;

bool isValidAnagram(string str1, string str2);

int main(){
    cout<<isValidAnagram("anagram", "nagaram")<<"\n"; // Output : 1(true)
    cout<<isValidAnagram("rat", "car")<<"\n"; // Output : 0(false)

    return 0;
}

bool isValidAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }

    int countArr[26] = {0};
    for(int i=0; i<str1.length(); i++){
        int idx = str1[i]-'a';
        countArr[idx]++;
    }

    for(int i=0; i<str2.length(); i++){
        int idx = str2[i]-'a';
        if(countArr[idx] == 0){
            return false;
        }else{
            countArr[idx]--;
        }
    }

    return true;
}