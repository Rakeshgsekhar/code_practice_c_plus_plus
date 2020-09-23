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
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int totalCount = n/3;
        unordered_map<int, int> dp;
        cout<<"Total Count : "<<totalCount<<endl;
        vector<int> result;
        for(int i : nums){
            if(dp.find(i) == dp.end()){
                dp[i] = 1;
            }else{
                dp[i]++;
            }
            if(dp[i] > totalCount){
                result.push_back(i);
            }
        }
        // for(auto x : dp){
        //     cout<<x.first<<" -> "<<x.second << endl;
        // }
        return result;
    }
};


int main(){
    Solution S;
    vector<int> nums = {1,1,1,2,2,3,3,3};
    // S.majorityElement(nums);
    vector<int> result = S.majorityElement(nums);
    for(int c:result){
        cout<<c<<"\t";
    }
    cout<<endl;
}