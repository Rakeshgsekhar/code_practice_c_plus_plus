#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>

using namespace std;

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        vector<int> results;
        for(int i =0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                results.push_back(nums[i]^nums[j]);
            }
        }
        cout<< *max_element(results.begin(),results.end())<<endl;
        return *max_element(results.begin(),results.end());
    }
};

int main(){
    Solution s;
    vector<int> nums {3,10,5,25,2,8};
    vector<int> nums1 {0};
    vector<int> nums2 {2,4};
    vector<int> nums3 {8,10,2};
    vector<int> nums4 {14,70,53,83,49,91,36,80,92,51,66,70};
    s.findMaximumXOR(nums);
    s.findMaximumXOR(nums1);
    s.findMaximumXOR(nums2);
    s.findMaximumXOR(nums3);
    s.findMaximumXOR(nums4);
    return 0;
}