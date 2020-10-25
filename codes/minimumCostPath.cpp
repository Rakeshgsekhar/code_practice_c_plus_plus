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
    int min(int x, int y, int z){
        if (x < y)
            return (x < z)? x : z;
        else
            return (y < z)? y : z;
    }
    int minEffort(vector<vector<int>>& heights,int m, int n){
        if (m<0 || n<0){
            return __INTMAX_MAX__;
        }
        else if(m==0 && n==0){
            return heights[m][n];
        }else{
            return heights[m][n] + min(minEffort(heights,m-1,n-1),minEffort(heights,m-1,n),minEffort(heights,m,n-1));
        }
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        
    }
};

