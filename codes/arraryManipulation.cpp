// #include <bits/stdc++.h>
#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>

using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries) {

    vector<long> array (n,0);
    long largest = 0;
    for(vector<int> query : queries){
        for(int i = query[0]-1;i <= query[1]-1; i++){
            array[i] = array[i]+query[2];
        }
    }
   for(int i =0;i<n;i++){
       if(array[i] > largest){
           largest = array[i];
       }
   }
    return largest;
}

long arrayManipulationMethodOptimized(int n, vector<vector<int>> queries) {
    long int max=0,x=0,sum;
    long int *a = new long int [n+1]();
    for(vector<int>query:queries){
        a[query[0]] += query[2];
        if((query[1]+1) <= n )a[query[1]+1] -= query[2];
    }

    for(int i = 1 ;i<=n;i++){
        x = x + a[i];
        if(max < x) max = x;
    }

    return max;
}

int main(){
    vector<vector<int>> queries {{1,2,100},{2,5,100},{3,4,100}};
    vector<vector<int>> queries2 {{1,5,3},{4,8,7},{6,9,1}};
    vector<vector<int>> queries3 {{2,6,8},{3,5,7},{1,8,1},{5,9,15}};
    int n = 10;
    // int largestValue = arrayManipulation(n,queries);
    int newVal = arrayManipulationMethodOptimized(n,queries);
    // cout<<"Largest : "<<newVal;

    cout<<"Largest: "<<arrayManipulationMethodOptimized(n,queries)<<endl;
    cout<<"Largest: "<<arrayManipulationMethodOptimized(n,queries2)<<endl;
    cout<<"Largest: "<<arrayManipulationMethodOptimized(n,queries3)<<endl;
    return 0;
}