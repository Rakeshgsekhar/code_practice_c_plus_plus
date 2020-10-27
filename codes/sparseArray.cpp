#include <bits/stdc++.h>
#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>

using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int>result;
    unordered_map<string, int> memo;
    for(string q : strings){
        if (memo.find(q) == memo.end()){
            memo[q] = 1;
        }else{
            int val = memo[q];
            memo[q] = val+1;
        }
    }
    for(string query:queries){
        if (memo.find(query) == memo.end()){
            result.push_back(0);
        }else{
            result.push_back(memo[query]);
            
        }
    }
    return result;

}

int main()
{
    vector<string> strings {"abcde","sdaklfj","asdjf","na","basdn","sdaklfj","asdjf","na","asdjf","na","basdn","sdaklfj","asdjf"};
    vector<string> queries {"abcde","sdaklfj","asdjf","na","basdn"};
    vector<int> res = matchingStrings(strings, queries);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i];
    }
    return 0;
}
