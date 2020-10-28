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

bool compareInterval(vector<int>interval1 , vector<int>interval2){
    return (interval1[0] < interval2[0]) ? true:false;
}

void Print_Vector(vector<int> Vec) 
{ 
    for (int i = 0; i < Vec.size(); i++) { 
        cout << Vec[i] << " "; 
    } 
    cout << endl; 
    return; 
} 
set<vector<int>> findOverLappingQueries(vector<vector<int>> queries){
    set<vector<int>> result {};
    vector<int> sumResult;
    int max_ele = 0;
    int n = queries.size();
    sort(queries.begin(),queries.end(),compareInterval);

    for(int i = 1;i<n;i++){
        int sum = 0;
        if(queries[i-1][1] > queries[i][0]){
            result.insert(queries[i-1]);
            result.insert(queries[i]);
            sum = queries[i][2]+queries[i-1][2];
            sumResult.push_back(sum);
        }
    }
     cout<<endl<<"SET: "<< endl;
    for (auto it = result.begin(); 
         it != result.end(); 
         it++) { 
  
        Print_Vector(*it); 
    } 

    cout<<"SUMS: "<< endl;
    for(int i =0;i<sumResult.size();i++){
        cout<<sumResult[i]<<" ";
    }

    return result;

}

long arrayManipulationMethodOptimized(int n, vector<vector<int>> queries) {

    long largest = 0;
    set<vector<int>> overLappingQueries = findOverLappingQueries(queries);
    for(vector<int>query : overLappingQueries){
        largest += query[2];
   }
   return largest;
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