#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>

using namespace std;

int intValue(string s,vector<std::vector<char>> solution){
    int numeric = 0;
    for(int i = 0 ; i< s.size();i++){
        for(vector<char>ch : solution){
            if(s[i] == ch[0]){
                if ( i == 0 && ch[1] == '0' && s.size() != 1){
                    return -1;
                }
                numeric = numeric*10 + int(ch[1]-'0');
            }
        }
    }
    return numeric;
}
bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {
    int num1 = intValue(crypt[0],solution);
    int num2 = intValue(crypt[1],solution);
    if ( num1 == -1 || num2 == -1){
        return false;
    }
    int num3 = intValue(crypt[2],solution);
    if ( (num1+num2) != num3 ){
        return false;
    }
    
    return true;
}

int main(){
    vector<std::string> crypt{"SEND", "MORE", "MONEY"};
    vector<std::vector<char>> solution {{'O', '0'},
            {'M', '1'},
            {'Y', '2'},
            {'E', '5'},
            {'N', '6'},
            {'D', '7'},
            {'R', '8'},
            {'S', '9'}};
    string result = isCryptSolution(crypt,solution)?"true":"false";
    cout<<result<<endl;
    vector<std::string> crypt1{"AA", "AA", "AA"};
    vector<std::vector<char>> solution1 {{'A', '0'}};
    result = isCryptSolution(crypt1,solution1)?"true":"false";
    cout<<result<<endl;

     vector<std::string> crypt2{"A", "A", "A"};
    vector<std::vector<char>> solution2 {{'A', '0'}};
    result = isCryptSolution(crypt2,solution2)?"true":"false";
    cout<<result<<endl;
}