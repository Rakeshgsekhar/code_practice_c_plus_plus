#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalpha(c) && !isdigit(c); }), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        string rev(s);
        reverse(rev.begin(), rev.end()); 
        if(s.compare(rev) != 0){
            return false;
        }
        return true;
    }
};

int main(){
    Solution s;
    if(s.isPalindrome("1A man, a plan, a canal: Panama1")){
        cout<<"true"<<endl;
    }else{
         cout<<"false"<<endl;
    }
    
    return 0;
}