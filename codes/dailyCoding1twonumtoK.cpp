#include <iostream>
#include<vector> 
#include <sstream>
#include <bits/stdc++.h> 


using namespace std;

vector<int> findTwoNumber(vector<int>nums,int target){
    vector<int>result;
    for(int k:nums){
        if(find(nums.begin(), nums.end(), (target-k)) != nums.end()){
            result.push_back(k);
            result.push_back(target-k);
            return result;
        }
    }
    return result;
}

int main(){
    int t,n,k;
    cin>>t;
    for(int test = 0;test<t;test++){
        vector<int>nums;
        cin>>n;
        for(int num = 0;num<n;num++){
            int val ;
            cin>>val;
            nums.push_back(val);
        }
        cin>>k;
        vector<int> result = findTwoNumber(nums,k);
        cout<<"#Case "<<(test+1)<<": ";
        for(int i = 0;i<result.size();i++){
            cout<<result[i]<<" ";
        }

    }
}