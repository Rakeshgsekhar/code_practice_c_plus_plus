/*
Sum of Non Adjecent Number
*/
#include <iostream>
#include<vector> 
#include <sstream>
#include <bits/stdc++.h> 


using namespace std;

/** Brute Force
 * 
 * 
 * loop inside loop
 * time complexity o(n2)
 * spce complexity o(1)
 * 
 *  
*/
int maxSum(vector<int>nums){
    // int result = 0;
    // for(int i =0 ; i < nums.size();i++){
    //     int max1 = nums[i];
    //     for (int j = i+2; j<nums.size();j+2){
    //             max1 += nums[j];
    //             cout<<max1;
    //     }
    //     if (max1 > result){
    //         result = max1;
    //     }
    // }
    // cout<< result;
    int incl = nums[0],excl =0,excl_new = 0;

    for(int i =1;i<nums.size();i++){
        excl_new = (incl >excl) ? incl:excl;

        incl = (excl + nums[i]);
        excl = excl_new;
    }

    return incl > excl ? incl :excl;
}

int main(){
    int t,n;
    cin>>t;
    for(int test = 0;test<t;test++){
        vector<int>nums;
        cin>>n;
        for(int num = 0;num<n;num++){
            int val ;
            cin>>val;
            nums.push_back(val);
        }
        int result = maxSum(nums);
        cout<<"#Case "<<(test+1)<<": "<<result;
        
    }

    return 0;
}