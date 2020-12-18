#include <iostream>
#include<vector> 
#include <sstream>
#include <bits/stdc++.h> 


using namespace std;

int findMissingInteger(int* nums,int n){
    int sum = 0;
    for(int i = 0 ; i<n;i++){
        if(nums[i] >= 0){
            sum+=nums[i];
        }
    }
    int to_beSum = (n*(n+1))/2;
    int missing = to_beSum - sum;

    return missing;   
}

int main(){
    int t,n;
    cin>>t;
    for(int test = 0;test<t;test++){
        cin>>n;
        int nums[n];
        for(int num = 0;num<n;num++){
            int val ;
            cin>>val;
            nums[num] = val;
        }
        int result = findMissingInteger(nums,n);

        cout<<endl;
        cout<<"#Case "<<(test+1)<<": "<<result<<endl;
    }
    return 0;
}