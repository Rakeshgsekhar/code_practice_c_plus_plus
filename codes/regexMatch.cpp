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
    //bool isMatch(string s, string p) {
       // string result;
    //    int klen = p.length();
    //     int i =0, j =0, k=0;
    //     int length = s.length();
    //     char result [length];
    //     if(klen == 2 && p[0] == '.' && p[1] == '*'){
    //         return true;
    //     }
    //     while(i<length || k< klen){
    //         if(p[k] != '*'){
    //             if(p[k] == '.' ){
    //                 result[j] = s[i];
    //                 k++;
    //             }else{
    //                 result[j] = p[k];
    //                 k++;
    //             }
    //         }else{
    //             if(k == 0){
    //                 return false;
    //                 break;
    //             }
    //             result[j] = result[j-1];
    //             k++;
    //         }
    //         i++;
    //         j++;
    //     }
    //     result[j] = '\0';
    //      cout<<"matched: "<<" "<< result <<endl;
    //     string resultChar= result;
    //     if(s.compare(resultChar) == 0 || resultChar.find(s) != -1){
    //         return true;
    //     } else{
    //         return false;
    //     }
    // }

    bool isMatch(string s, string p) {
        if (p.empty())
            return s.empty();
        
        bool firstMatch = s.size() > 0 && (s[0] == p[0]) || (p[0] == '.');
        if (p.size() > 1 && p[1] == '*')
            return isMatch(s, p.substr(2)) || (firstMatch && isMatch(s.substr(1), p));
        else
            return firstMatch && isMatch(s.substr(1), p.substr(1));
    }
};

int main(){

    Solution s;
    if(s.isMatch("mississippi","mis*is*p*."))
//    if(s.isMatch("aab","c*a*b"))
        cout<<"Matched"<<endl;
    else
    {
        cout<<"not matched"<<endl;
    }
    
}