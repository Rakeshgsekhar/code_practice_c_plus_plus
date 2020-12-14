#include <iostream>
#include<vector> 
#include <sstream>
#include <bits/stdc++.h> 


using namespace std;


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> total;
        int len = nums.size();
        sort(nums.begin(),nums.end());
        int val1ptr = 0;
        int val4ptr = len-1;

        while(val1ptr < val4ptr){
            if((nums[val1ptr]+nums[val4ptr]) > target){
                val4ptr--;
            }else{
                int val2ptr = val1ptr+1;
                int val3ptr = val4ptr-1;
                while(val2ptr < val3ptr){
                    if((nums[val1ptr]+nums[val2ptr]+nums[val3ptr]+nums[val4ptr]) == target){
                        total.push_back(vector<int>{nums[val1ptr],nums[val2ptr],nums[val3ptr],nums[val4ptr]});
                        val2ptr++;
                        val3ptr--;
                    }else{
                        val2ptr++;
                        val3ptr--;
                    }
                }
                val1ptr++;
                val4ptr--;
            }
        }
        return total; 
    }
};


int main(){
    Solution S;
    vector<int> nums{-1,0,1,-2,0,2};
    vector<vector<int>> total = S.fourSum(nums,0);
    for(vector<int> k : total){
        for(int i : k){
            cout<< i << " ";
        }
        cout<<endl;
    }
    return 0;
}