#include <iostream>
#include<vector> 
#include<set>
#include <regex> 
#include <algorithm>
#include<string>
#include <cstring>

using namespace std;

int main(){

    regex r("([A-Z])");
    cout<<"Camel to Snake Case"<<endl;
    cout<<"********************"<<endl;
    cout<<"Enter String"<<endl;
    string s ;//= "HackerEarth";
    cin>>s;
    string result ;
    regex_replace(back_inserter(result),s.begin(),s.end(),r," $1");
    result = regex_replace(result, std::regex("^ +"), "");
    result = regex_replace(result,regex{" "},"_");
    transform(result.begin(), result.end(), result.begin(), ::tolower); 
    cout<<result;
    return 0;
}