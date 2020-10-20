#include <iostream>
// #include<vector> 
// #include<set>
// #include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <unordered_map>

using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    else return(b,a%b);
}

void leftRotate(int *a,int d, int n){
    d = d%n;
    int g_c_d = gcd(d,n);
    for(int i=0;i<g_c_d;i++)
    {
        int temp = a[i];
        int j = i;
        while(1){
            int k = j + d;
            if(k>=n){
                k = k - n;
            }
            if(k == i) break;
            a[j] = a[k];
            j = k;
        }
        a[j] = temp;
    }
}

void rightRotate(int *a,int d, int n){
    d = n -d;
    d = d%n;
    int g_c_d = gcd(d,n);
    for(int i=0;i<g_c_d;i++)
    {
        int temp = a[i];
        int j = i;
        while(1){
            int k = j + d;
            if(k>=n){
                k = k - n;
            }
            if(k == i) break;
            a[j] = a[k];
            j = k;
        }
        a[j] = temp;
    }
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    leftRotate(arr,3,n);
    printArray(arr,n);
    rightRotate(arr,3,n);
    printArray(arr,n);
    return 0;
}