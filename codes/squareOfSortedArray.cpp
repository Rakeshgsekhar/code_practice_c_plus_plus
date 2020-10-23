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
   void swap(int* a, int* b)  
    {  
        int t = *a;  
        *a = *b;  
        *b = t;  
    }  
    int partition (vector<int>& arr, int low, int high)  
    {  
        int pivot = arr[high]; 
        int i = (low - 1);
  
        for (int j = low; j <= high - 1; j++)  
        {  
        
            if (arr[j] < pivot)  
            {  
                i++; 
                swap(&arr[i], &arr[j]);  
            }  
        }  
        swap(&arr[i + 1], &arr[high]);  
        return (i + 1);  
    }  
    void quickSort(vector<int>& arr, int low, int high){
        if (low < high)  
        {  
            int pi = partition(arr, low, high);  
    
            quickSort(arr, low, pi - 1);  
            quickSort(arr, pi + 1, high);  
        }  
    }

    vector<int> sortedSquares(vector<int>& A) {
        vector<int> squredArray(A.size(),0);
        for(int i =0;i<A.size();i++){
            A[i] = A[i]*A[i];
        }
        quickSort(A,0,A.size());
        return A;
    }

    /**
     * Diff aaproach
     * vector<int> ans = A;
        int i=0;
        int j=A.size()-1;
        int n = j;
        while(i<=j)
        {
            ans[n] = abs(A[i]) > abs(A[j]) ? A[i] * A[i++] : A[j] * A[j--];
            n--;
        }
        return ans;
     * 
     * 
    */
};
int main(){
    Solution s;
    vector<int>nums {-4,-1,0,3,10};
    vector<int>result = s.sortedSquares(nums);

    for(int i =0 ;i< result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}