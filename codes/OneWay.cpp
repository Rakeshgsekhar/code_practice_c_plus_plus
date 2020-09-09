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
    bool isOneWay(string s1, string s2){
        int counter = 0,limit = 0,s1length = s1.size(),s2length = s2.size(),def = 0;
        if(s1length != s2length){
            if (s1length > s2length){
                limit = s2length;
               def = s1length - s2length;
            }else{
                limit = s1length;
                def = s2length - s1length;
            }
        }else{
            limit = s1length ;
            def = 0;
        }
        if (abs(s1length -s2length) > 1 ){
            return false;
        }
        for(int i = 0; i < limit;i++){
            if (s1[i] != s2[i]){
                counter ++;
            }
            if (counter-def > 1){
                return false;
            }
        }
        return true;
    }
};

int main(){

    Solution s;
    if(s.isOneWay("pale","ple")){
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    if(s.isOneWay("pales","pale")){
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    if(s.isOneWay("pale","bale")){
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    if(s.isOneWay("pale","bake")){
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    if(s.isOneWay("pale","ba")){
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    
}