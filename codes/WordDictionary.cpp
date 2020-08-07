#include <iostream>
#include<vector> 
#include<set>
#include <regex>
#include <algorithm>
#include<string>
#include <cstring>
#include <unordered_map> 

using namespace std;
class WordDictionary {
public:
    /** Initialize your data structure here. */
    vector<string> dictionary;
    WordDictionary() {
       vector<string> temp;
       dictionary = temp;
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        dictionary.push_back(word);
    }

    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        vector<string>::iterator it;
        string s;
        if(dictionary.size() == 0 || word == ""){
            return false;
        }
        string open ="[",close ="]";
        string regesVal;
        regex x("[/./g]");
        regex alph("(/[a-z]?/)");
        int num = count(word.begin(),word.end(),'.');
        cout<<num;
        s = regex_replace(word,alph,"[\1]");
        s = regex_replace(s,x,"[a-z]{1}");
        cout<<s;

        regex r("("+s+")");
        for(it=dictionary.begin(); it<dictionary.end(); it++){
            string temp = *it;
            if(temp.length() == word.length()){
                if(word == temp){
                    return true;
                } 
                if(regex_match(*it,r)){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    WordDictionary w ;
    w.addWord("bad");
    w.addWord("dad");
    w.addWord("mad");

    // regex r("([b][a-z]{1}[a-z]{1})");

    // if(regex_match("baad",r)){
    //     cout<<"true"<<endl;
    // }else{
    //      cout<<"false"<<endl;
    // }
     w.search("bad")?cout<<"true"<<endl : cout<<"false"<<endl;
     w.search("ba.")? cout<<"true"<<endl : cout<<"false"<<endl;
     w.search("b..d")? cout<<"true"<<endl : cout<<"false"<<endl;
    return 0;
}