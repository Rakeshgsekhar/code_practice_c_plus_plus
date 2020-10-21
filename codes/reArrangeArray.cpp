#include <iostream>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>
#include <set>

using namespace std;

int arrange(int arr[], int len){

    set<int> hashSet;
    for(int i =0 ;i<len;i++){
        hashSet.insert(arr[i]);
    }

    for(int  i =0 ;i < len;i++){
        if(hashSet.find(i) != hashSet.end()){
            arr[i] = i;
        }else{
            arr[i] = -1;
        }
    }
    return 0;
}

int main(){
    int arr[]={1,3,4,5,-1,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrange(arr,n);
    for(int i =0 ;i < n;i++){
        cout<<arr[i]<<" ";
    }
}