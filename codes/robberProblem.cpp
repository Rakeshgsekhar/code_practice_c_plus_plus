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
    int rob(vector<int>& nums) {
        int num_size = nums.size();
        int incl = nums[0];
        int excl = 0;
        int excl_new;

        for(int i = 1;i<num_size;i++){
            excl_new = (incl > excl) ? incl : excl;
            incl = excl + nums[i];
            excl = excl_new;
        }
        return ((incl>excl)? incl:excl);
    }
};