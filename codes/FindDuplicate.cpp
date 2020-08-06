#include <iostream>
#include<vector> 
#include<cstdlib>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> results;
        
        sort(nums.begin(), nums.end()); 
        
        for (int i = 0; i < nums.size(); i++) 
        { 
            if(nums[i] == nums[i+1]){
                results.push_back(nums[i]);
            }
        } 

        return results;
    } 
};

// int main()