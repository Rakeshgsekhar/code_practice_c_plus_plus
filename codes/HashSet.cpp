#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>

using namespace std;
class MyHashSet {

 public:
    /** Initialize your data structure here. */
   int a[];
    MyHashSet() {
        a[1];
    }
    
    int size(){
        int arraySize = sizeof(a)/sizeof(a[0]);
        return arraySize;
    }
    void add(int key) {
        int curentsize = size();
        cout<<"size: "<<curentsize;
        a[curentsize-1] = key;
        updateSize(a,(curentsize+1));
    }
    
    void remove(int key) {
        int index = -1;
        int arraySize = sizeof(a)/sizeof(a[0]);
        int newArray[arraySize-1];
        for(int i = 0;i<arraySize;i++){
            if(a[i] == key){
                index = i;
                break;
            }
        }
        if(index == 0){
            int j=0;
            for(int i =1 ; i < arraySize;i++){
                newArray[j] = a[i];
                j++;
            }
            a= newArray;
             cout<<"0:  Deleted"<<endl;
        }else if(index == arraySize-1){
            int j=0;
            for(int i =0 ; i<arraySize-1;i++){
                newArray[j] = a[i];
                j++;
            }
            a= newArray;
            cout<<"length:  Deleted"<<endl;
        }else if(index>0 && index<arraySize){
            int j=0;
            for(int i =1 ; i<index;i++){
                newArray[j] = a[i];
                j++;
            }
            for(int i = index+1 ; i<arraySize;i++){
                newArray[j] = a[i];
                j++;
            }
            a= newArray;
            cout<<"inbetween:  Deleted"<<endl;
        }
        
    }
    void updateSize(int* newArray, int size){
        int array [size];
        int arraySize = sizeof(newArray)/sizeof(newArray[0]);
        for(int i = 0; i< arraySize;i++){
            array[i] = newArray[i];
        }
        a = array;
    }
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int arraySize = size();
        for(int i = 0;i < arraySize;i++){
            if(a[i] == key){
                return true;
            }
        }
        return false;
    }
};


int main(){
    MyHashSet* set = new MyHashSet();
    set->add(1);
    set->add(3);
    set->add(4);
    set->add(6);
    set->add(8);
    cout<<"1: "<<set->contains(1)<<endl;
    cout<<"3: "<<set->contains(3)<<endl;
    set->remove(3);
    set->remove(10);
    set->remove(2);

    cout<<"3: "<<set->contains(3)<<endl;
    cout<<set->contains(2)<<endl;
   return 0;
}