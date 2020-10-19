#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>
#include <sstream>
#include<algorithm>

using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        for(char e:s){
            t.erase(remove(t.begin(),t.end(),e));
        }
        cout<<t<<endl;
        return t[0];
    }
};

int main(){
    Solution s;
    string s1 = "ba",s2="baa";
    cout<<s.findTheDifference(s1,s2)<<endl;
}