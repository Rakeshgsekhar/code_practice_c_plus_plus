#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int digitCount(int val){
        int digiCount = 0;
        while(val != 0){
            val = val/10;
            digiCount++;
        }
        return digiCount;
    }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i =0 ;i< nums.size();i++){
            double answer = 1.0*nums[i] / (1.0*100);
            double answer1 = 1.0*nums[i] / (1.0*10000);
            if(answer < 1.0 && answer >= 0.1){
                count++;
                continue;
            }else if(answer1 <1.0 && answer1 >= 0.1){
                count++;
                continue;
            }
            /*
            if(digitCount(nums[i])%2 == 0 ){
                count++;
            } 
            */
        }
        return count;   
    }
};
int main(){
    Solution s;
    vector<int>nums {12,345,2,6,7896};
    cout<<endl<<"EVEN COUNT :"<<s.findNumbers(nums);
    return 0;
}