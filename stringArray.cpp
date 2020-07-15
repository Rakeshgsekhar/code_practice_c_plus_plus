#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>

using namespace std;

string getString(char x){
    string s(1,x);
    return s;
}

int main (){

    string resultstr;
    set<string> result;
    vector<string> str{"googlebee","facebk","youtube"};
   
    string initial = str[0];

    char chararray [initial.length()+1];

    strcpy(chararray,initial.c_str());

    for(int i=0;i<initial.length()+1;i++){
       for(string s : str){
           if(s.find(chararray[i]) != string::npos){
               result.insert(getString(chararray[i]));
           }else{
               result.erase(getString(chararray[i]));
               break;
           }
       }
    }

    for(string s : result){
        cout<<s<<endl;
    }
    return 0;
}