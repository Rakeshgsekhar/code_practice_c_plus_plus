#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>

using namespace std;
class Solution {
private:
	double median(vector<int>& arr1, vector<int>& arr2, int start1, int len1, int start2, int len2, int k) {
        if (len1 > len2) {
            return median(arr2, arr1, start2, len2, start1, len1, k);
        }

        if (len1 == 0) {
            return arr2[start2 + k - 1];
        }

        if (k == 1) {
            return min(arr1[start1], arr2[start2]);
        }

        int p = min(k / 2, len1);
        int q = k - p;
        
        if (arr1[start1 + p - 1] == arr2[start2 + q - 1]) {
            return arr1[start1 + p - 1];
        } 
        
        if (arr1[start1 + p - 1] > arr2[start2 + q - 1]) {
            return median(arr1, arr2, start1, len1, start2 + q, len2 - q, k - q);
        } 
        return median(arr1, arr2, start1 + p, len1 - p, start2, len2, k - p);
       
	}
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len = nums1.size() + nums2.size();

        if (len & 0x1) {
            return median (nums1, nums2, 0, nums1.size(), 0, nums2.size(), (len + 1) / 2);
        } else {
            return ((median(nums1, nums2, 0, nums1.size(), 0, nums2.size(), len / 2) 
                + median(nums1, nums2, 0, nums1.size(), 0, nums2.size(), len / 2 + 1)) / 2.0f);
        }
    }            
};

int main(){
    Solution s;
    vector<int> num1 {1,2,4};
    vector<int> num2 {0,3}; 

    cout<<s.findMedianSortedArrays(num1,num2);
}