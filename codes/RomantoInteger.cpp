#include <iostream>
#include<vector> 
#include<set>
#include <regex>
#include <algorithm>
#include<string>
#include <cstring>
#include <unordered_map> 

using namespace std;

class Solution {
public:
    int getValue(char a){
        if(a == 'I'){
            return 1;
        }else if(a == 'V'){
            return 5;
        }else if(a == 'X'){
            return 10;
        }else if(a == 'L'){
            return 50;
        }else if(a == 'C'){
            return 100;
        }else if(a == 'D'){
            return 500;
        }else if(a == 'M'){
            return 1000;
        }
        return -1;
    }
    int romanToInt(string s) {
        if(s == ""){
            return 0;
        }

        int result = 0;
        for(int i =0 ;i<s.length();i++){
            int val1 = getValue(s[i]);
            if(i+1<s.length()){
                int val2 = getValue(s[i+1]);
                if(val1>=val2){
                    result= result+val1;
                }else if( val2 > val1){
                    result = result + val2 - val1;
                    i++;
                }
            }else{
                result = result + val1;
            }
        }

        return result;
    }
};

int main(){
    Solution s ;
    cout<< s.romanToInt("III")<<endl;
    
    return 0;
}

