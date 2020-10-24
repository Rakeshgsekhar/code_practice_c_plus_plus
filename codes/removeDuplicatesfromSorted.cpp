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
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        if(n == 0)return 0;
        
        if(n == 2){
            if(nums[0] == nums[1]){
                nums.erase(nums.begin());
                return 1;
            }
           return 2; 
        }
        
        for(int i = 0;i<n-1;i++){
           if(nums[i]!=nums[i+1]){
              nums[k++] = nums[i];
           }
        }
        nums[k++]=nums[n-1];
        return k;
    }
};

int main(){
    Solution s;
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    int count = s.removeDuplicates(nums);
    cout<<"Count : "<<count<<endl;
    for(int i = 0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}