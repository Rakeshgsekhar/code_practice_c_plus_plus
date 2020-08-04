#include<iostream>
#include<string.h>
#include<sstream>
#include<vector>
#include<bits/stdc++.h> 
#include <chrono>

using namespace std;

void merge(int arr[],int aux[], int low, int mid, int high){

    for(int k = low; k <= high;k++){
        aux[k] = arr[k];
    }

    int i = low, j = mid+1;
    for(int k = low; k <= high ; k++){
        if(i>mid) arr[k]=aux[j++];
        else if(j>high) arr[k]=aux[i++];
        else if(aux[j]<aux[i]) arr[k]=aux[j++];
        else arr[k] = aux[i++];
    }
}

    void sort(int arr[], int aux[], int low, int high){
        if( low < high){
        int mid = (low+high)/2;
        sort(arr,aux,low,mid);
        sort(arr,aux,mid+1,high);
        merge(arr,aux,low,mid,high);
        }   
       
    }

    void display(int arr[], int size){
        for(int i = 0;i < size;i++){
            cout<<arr[i]<<" ";
        }
         cout<<endl;
    }

int main(){
    auto start = chrono::high_resolution_clock::now();
    int arr [] = {1425,45896,556,21,4,5,66,2,14,9,0,1,15,20,15,4,14589,8,65,8,456,51,4,811,22,11,4,55,68,4,454,856,421,14,145,3214,1225,1221};
    int size = sizeof(arr) / sizeof(arr[0]);
    int aux[size];
    display(arr,size);
    sort(arr,aux,0,size-1);
    auto stop = chrono::high_resolution_clock::now(); 
    display(arr,size);
    auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start); 
    cout<<duration.count() <<"ms" <<endl; 
    return 0;
}