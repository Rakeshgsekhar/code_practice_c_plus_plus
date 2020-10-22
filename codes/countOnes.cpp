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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count = 0;
        int prev = 0;
        int  n = nums.size();
        for(int i = 0 ;i<n;i++){
            // cout<<nums[i]<<"";
            if(nums[i] == 1){
                count++;
            }else{
                if(count>max){
                    max = count;
                }
                count=0;
            }

            if(i == (n-1)){
                if(count>max){
                    max = count;
                }
            }
        }
        return max;
    }
};
int main(){
    Solution s;
    vector<int>nums {1,1,1,0,1,1,1,1};
    cout<<endl<<"MAX COUNT :"<<s.findMaxConsecutiveOnes(nums);
    return 0;
}