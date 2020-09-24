#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>
#include <sstream>

using namespace std;

class Solution {
public:
    string reorderSpaces(string text) {
        int spaceCount = 0;
        istringstream iss(text);
        string word;
        for(char c : text){
            if (c == ' '){
                spaceCount++;
            }
        }
        vector<string> stringarr;
        while(iss>>word){
            stringarr.push_back(word);
        }
        cout<<"stringstize"<<stringarr.size()<<endl;
        string result = "";
        if(stringarr.size()<2 && spaceCount == 0){
            return text;
        }else if(stringarr.size()<2 && spaceCount != 0){
            int spaceperword = spaceCount/(stringarr.size());
            spaceCount = spaceCount-spaceperword*(stringarr.size()-1);
            for(int i =0;i<stringarr.size();i++){
                result = result.append(stringarr[i]);
                if(i!=stringarr.size()-1)
                    result.append(spaceperword, ' ');
            }
        }else{
            int spaceperword = spaceCount/(stringarr.size()-1);
            spaceCount = spaceCount-spaceperword*(stringarr.size()-1);
            cout<<"spaceperword "<< spaceperword<<endl;
            cout<<"remaining count"<< spaceCount<<endl;
            for(int i =0;i<stringarr.size();i++){
                result = result.append(stringarr[i]);
                if(i!=stringarr.size()-1)
                    result.append(spaceperword, ' ');
            }
        }
        if (spaceCount == 0){
            return result;
        }else{
            return result.append(spaceCount,' ');
        }
    }
};

int main(){
    Solution s;
    string source = "  this   is  a sentence ";
    cout<<s.reorderSpaces(source)<<endl;
}