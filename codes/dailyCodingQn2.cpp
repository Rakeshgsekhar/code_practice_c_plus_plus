#include <iostream>
#include<vector> 
#include <sstream>
#include <bits/stdc++.h> 


using namespace std;

void convertArray(vector<int>&nums){
    int product = 1;
    bool zero = false;
    vector<int> zeroIndexes;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != 0){
            product = product * nums[i];
        }else{
            zero = true;
            zeroIndexes.push_back(i);
        }
    }
    if(zero){
        for(int i =0;i<nums.size();i++){
            if(find(zeroIndexes.begin(), zeroIndexes.end(),i) != zeroIndexes.end()){
                nums[i] = product;
            }else{
                nums[i] = 0;
            }
        }
    }else{
        for(int i =0;i<nums.size();i++){
            nums[i] = product/nums[i];
        }
    }
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
        // vector<int> result = findTwoNumber(nums,k);
        convertArray(nums);
        cout<<"#Case "<<(test+1)<<": ";
        for(int i = 0;i<n;i++){
            cout<<nums[i]<<" ";
        }
    }
    return 0;
}