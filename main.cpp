#include <iostream>
#include<vector> 
#include <algorithm>

using namespace std;

string findarray(int a [] ,int k,int n);

int main(){
    int ar[]= {4,3,1,-6,0};
    int k = 5;
    int len = sizeof(ar)/sizeof(ar[0]);
    cout << findarray(ar,k,len);
    return 0 ;
}

string findarray(int a [] ,int k, int n){
    vector<int> arr( a ,a + n);
      vector<int>::iterator it;
    for(int i : arr){
        int temp = k- i;
        it = find(arr.begin(),arr.end(),temp);
        if(distance(arr.begin(),it) != arr.size()){
            return "true";
        }
    }
    return "false";
}

/**
 * 
 * dest () used to concert array to vector
 * 
 * int src[] = { 1, 2, 3, 4, 5 };
 * 
 * std::vector<int> dest(std::begin(src), std::end(src));
*/