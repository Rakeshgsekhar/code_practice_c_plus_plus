#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>

using namespace std;

class Solution {
public:
     string shortestPalindrome(string s) {
         int endIndex = 0 ;
        if(s.size() == 0){
            return "";
        }
        if(s.size() == 1){
            return s;
        }
        for(int i =0 ;i < s.size();i++){
             int len = palinlength(0,i,s);
             if(len>endIndex){
                 endIndex = len;
            }
        }
       
        
        string newString = s.substr(endIndex,s.size()-1 + 1);
        cout<<"newString :" <<newString<<endl;
        string palin = s;
        if(isPalindrom(s)){
            return s;
        }else{
            
        for(int i =0 ;i < newString.size() ; i++){
            palin = newString[i]+palin;
            if(isPalindrom(palin)){
                return palin;
            }
        }
        }
        
        return "";
    }
    
    bool isPalindrom(string s){
        int left = 0;
        int right= s.size()-1;
        
        while(right > left){
            if(s[left++] != s[right--] ){
                return false;
            }
        }
        
        return true;
    }

    int  palinlength(int left, int right, string str){
       int length=0;
        while(left>=0 && right < str.size()){
            if(str[left]== str[right]){
                if(isPalindrom(str.substr(0,right-left+1))){
                     length = right-left+1;
                }
                left--;
                right++;
            }else break;
        }
        
        return length;
    }
};

int main(){
    Solution s;
   // cout<<s.shortestPalindrome("")<<endl;
   // cout<<s.shortestPalindrome("aacecaaa")<<endl;
    // cout<<s.shortestPalindrome(
   // cout<<s.shortestPalindrome("abbacd")<<endl;

    return 0;
}