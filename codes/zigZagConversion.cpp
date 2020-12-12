#include <iostream>
#include<vector> 
#include <sstream>
#include <bits/stdc++.h> 


using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        // char[]
        int stringLength = s.length();
        string result;
        int column = (stringLength/numRows ) + numRows;
        char strMatrix[numRows][column];
        memset(strMatrix, '0', sizeof(strMatrix));
        int positionPointer = 0;
        int stCounter = 0;
        int rowCounter = 0,columeCounter = 0;
        char sChar [stringLength];
        strcpy(sChar, s.c_str());
        while(stCounter < stringLength){
            if(rowCounter == 0){
                while(rowCounter != numRows-1){
                    strMatrix[rowCounter++][columeCounter] = sChar[stCounter++];
                }
            }
            if(rowCounter == numRows-1){
                while(rowCounter != 0 && columeCounter < column){
                    strMatrix[rowCounter--][columeCounter++]=sChar[stCounter++];
                }
            }
        }
        cout<<endl;
        for(int i = 0 ;i<numRows;i++){
            for(int j= 0;j<column;j++){
                cout<<strMatrix[i][j]<<" ";
                if(strMatrix[i][j] != '0' and strMatrix[i][j] !='\0'){
                    result.append(string(1,strMatrix[i][j]));
                }
            }
            cout<<endl;
        }
        // cout<<result;
        return result;


    }
};

int main(){
    Solution S;
    string result = S.convert("PAYPALISHIRING",3);
    return 0;
}