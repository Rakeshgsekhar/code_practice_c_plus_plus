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
    int searchInsert(vector<int>& nums, int target) {
        for(int i =0 ;i<nums.size();i++){
            if(nums[i] == target){
                return i;
            }
        }
        
        int k = 0;
        while(k<nums.size() && target>nums[k]){
             k++;
        }
        return k;
    }
};


int main(){
    Solution s;
    vector<int> nums{1,3,5,6};
    int target = 5;
    cout<<s.searchInsert(nums,target);
}