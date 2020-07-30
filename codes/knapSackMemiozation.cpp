#include<iostream>
#include<string.h>
#include<sstream>
#include<bits/stdc++.h> 

using namespace std;
class Solution{
    public:
    int max(int a, int b){return (a > b)? a : b;}
    int knapsack(int vals[], int weights[], int WEIGHT, int n,int** memo){
        if(n < 0) return 0;
        if(memo[n][WEIGHT] != -1){
            return memo[n][WEIGHT];
        }

        if(weights[n] > WEIGHT){
            memo[n][WEIGHT] = knapsack(vals,weights,WEIGHT,n-1,memo);
            return memo[n][WEIGHT];
        } else {
            memo[n][WEIGHT] = max(vals[n]+knapsack(vals,weights,WEIGHT-weights[n],n-1,memo),knapsack(vals,weights,WEIGHT,n-1,memo));
            return memo[n][WEIGHT];
        }

    }
    int knapsackmemo(int vals[], int weights[], int WEIGHT, int n){
        int** memo;
        memo = new int*[n];
        for(int i = 0; i < n; i++) memo[i]=new int[WEIGHT+1];

        for(int i = 0;i<n;i++){
            for(int j=0;j< WEIGHT+1 ; j++){
                memo[i][j] = -1;
            }
        }

        return knapsack(vals,weights,WEIGHT,n-1,memo);
    }
};

int main(){
    Solution s;
    int val[]={3,6,4,1};
    int weights[]={10,50,15,35};
    int WEIGHT = 60;
    int n = sizeof(val)/sizeof(val[0]);
    cout<<"Max: "<<s.knapsackmemo(val,weights,WEIGHT,n);
    return 0;
}