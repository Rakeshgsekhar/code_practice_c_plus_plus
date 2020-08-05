#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num < 4 && num != 1) return false;
        if(num == 1) return true;
        bool poweroffour = true;
        while(num != 0){
           // cout<< num << endl;
           if(num%4 >= 1 && num != 1){
           //    cout<< num%4 << endl;
               poweroffour = false;
           }
           num= num/4;
        }
        return poweroffour;
    }
};

string printBool(bool val){
    if(val){
        return "true";
    }else{
        return "false";
    }
}

int main(){
    Solution s;
    cout<<printBool(s.isPowerOfFour(5))<<endl;//truw
    cout<<printBool(s.isPowerOfFour(0))<<endl; //fasle
    cout<<printBool(s.isPowerOfFour(4))<<endl; //truw
    cout<<printBool(s.isPowerOfFour(16))<<endl; //true
    cout<<printBool(s.isPowerOfFour(21))<<endl;
    cout<<printBool(s.isPowerOfFour(8))<<endl;
    cout<<printBool(s.isPowerOfFour(64))<<endl; //true
    cout<<printBool(s.isPowerOfFour(256))<<endl; //true 2,147,483,647
    cout<<printBool(s.isPowerOfFour(2147483647))<<endl; // 17179869184 268435456
    cout<<printBool(s.isPowerOfFour(268435456))<<endl;
}

