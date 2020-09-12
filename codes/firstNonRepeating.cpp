#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>

using namespace std;

char firstNotRepeatingCharacter(std::string s) {
    int strLen = s.size();
    vector<char> lookUp;
    int count = 0;
    for(size_t i = 0;i < s.size() ;i++){
        // count = 0;
        for(size_t j = i+1;j < s.size() ;j++){
            cout<<j;
            if(s[i] == s[j]){
                count ++;
            }
        }
        if(count == 0){
            return s[i];
        }else{
            count = 0;
        }
    }
    return '-';
}

int main(){

    cout<<firstNotRepeatingCharacter("abcabcd")<<endl;
    cout<<firstNotRepeatingCharacter("abcabcd")<<endl;
    cout<<firstNotRepeatingCharacter("abacabaabacaba")<<endl;

    return 0;
}