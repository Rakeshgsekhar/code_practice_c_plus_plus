class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        newArray = nums1 + nums2
        newArray  = sorted(newArray)
        print(newArray)
        median = 0
        n = len(newArray)
        if n%2 == 0:
            median = float((newArray[int(n/2)]+newArray[int(n/2 -1)]) /2)
        else:
            median =float(newArray[int(n/2)])
        return median

s=Solution()
print(s.findMedianSortedArrays([1,2],[3,4]))
