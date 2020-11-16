#include <iostream>
#include<vector> 
#include <sstream>
#include <bits/stdc++.h> 


using namespace std;

const int MAX_CHAR = 26; 

bool check(string s1, string s2) 
{ 
    map<char, int> map; 
    for (int i = 0; i < s1.length(); i++) 
        map[s1[i]]++; 
  
    for (int i = 0; i < s2.length(); i++) 
        if (map[s2[i]] > 0) 
            return true; 
			
    return false; 
} 

vector<int> findShortestChain(vector<string>names, vector<vector<int>>quries){
    vector<int>results;
    bool compareit = true;
    for(vector<int>query:quries){
        // cout<<"vector"<<"-"<<query[0]<<"-"<<query[1]<<endl;
        for(int  i = (query[0]-1) ; i<(query[1]-1);i++){
            compareit = compareit &&  check(names[i],names[i+1]);
        }
        if(compareit){
            results.push_back((query[1] - query[0]) + 1);
        }else{
            results.push_back(-1);
        }
    }
    return results;
}


int main(){
    int t, n,q;
    
    cin >> t; // read t. cin knows that t is an int, so it reads it as such.
    for (int i = 1; i <= t; ++i) {
        vector<string> names;
        vector<vector<int>> quries;
        cin>>n>>q;
        string t;
        for(int m = 0 ;m<n;m++){
            cin>>t;
            names.push_back(t);
        }
        for(int k =0;k<q;k++){
            vector<int> query;
            int q1,q2;
            cin>>q1>>q2;
            query.push_back(q1);
            query.push_back(q2);
            quries.push_back(query);
        }
        vector<int>result = findShortestChain(names,quries);
        cout << "Case #" << i << ": ";
        for(int rt = 0;rt < result.size();rt++){
            cout<<result[rt]<< " ";
        }
        cout<<endl;
    }
    return 0;
}