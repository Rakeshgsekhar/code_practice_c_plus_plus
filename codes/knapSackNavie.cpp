#include<iostream>
#include<string.h>
#include<sstream>
#include<bits/stdc++.h> 

using namespace std;
class Solution{
    public:
    int max(int a, int b){return (a > b)? a : b;}
    int knapsack(int vals[], int weights[], int WEIGHT, int n){
        if(n == 0 || WEIGHT == 0){
            return 0;
        }
        if(weights[n-1] > WEIGHT) return knapsack(vals,weights,WEIGHT,n-1);
        else return max(vals[n-1]+knapsack(vals,weights,WEIGHT-weights[n-1],n-1),knapsack(vals,weights,WEIGHT,n-1));
    }
};

int main(){
    Solution s;
    int val[]={3,6,4,1};
    int weights[]={10,50,15,35};
    int WEIGHT = 60;
    int n = sizeof(val)/sizeof(val[0]);
    cout<<"Max: "<<s.knapsack(val,weights,WEIGHT,n);
    return 0;
}