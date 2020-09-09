#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <cstdlib>
// #include <cmath>
// #include <stdlib.h>

using namespace std;

class Solution{
    public:
    string compressString(string s1){
        int counter = 0,limit = 0;
        string result = "";
        // for(int i = 0 ;i<s1.size();i++)
        int i = 0;
        while(i<s1.size()){
            int k = i+1;
            counter = 1;
            while(k < s1.size() && s1[k] == s1[i]){
                counter++;
                k++;
            }
            result = result + s1[i] + to_string(counter);
            i = k;
        }
        // cout<< result;
        return result.size() < s1.size() ? result:s1;
    }
};

int main(){

    Solution s;
    cout<<s.compressString("aabcccc")<<endl;
    cout<<s.compressString("aabcccccaaa")<<endl;
     cout<<s.compressString("abcd")<<endl;
    
}