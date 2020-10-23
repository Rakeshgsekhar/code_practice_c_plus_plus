#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int k = 0,last = 0;
        int n = arr.size()-1;
        for(int i = 0 ;i<n+1;i++){
            if(i > n-k) break;
            
            if(arr[i] == 0){
                if (i==n-k){
                    arr[n] = 0;
                    n--;
                    break;
                }
                k++;
            }
        }
        
        last = n - k;
        
        for(int i =last;i>=0;i--){
            if(arr[i] == 0 ){
                arr[i+k] = 0;
                k--;
                arr[i+k] = 0;
            }else{
                arr[i+k] = arr[i];
            }
        }
    }
};

int main(){
    vector<int>input{0,4,1,0,0,8,0,0,3};
    Solution s;
    s.duplicateZeros(input);
    for(int i =0 ;i<input.size();i++){
        cout<<input[i]<<" ";
    }
}