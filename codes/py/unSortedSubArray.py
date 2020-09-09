class Solution:
    def findLengthOfShortestSubarray(self, arr):
        n = len(arr)
        l,r = 1,1

        i = 1
        while i < n and arr[i] >= arr[i-1]:
            left +=1
            i +=1
        i = n - 2
        while i > -1 and arr[i] <= arr[i+1]:
        #return v

s = Solution()
print(s.findLengthOfShortestSubarray([1,2,3,10,4,2,3,5]))
print(s.findLengthOfShortestSubarray([5,4,3,2,1]))#[2,2,2,1,1,1]
print(s.findLengthOfShortestSubarray([2,2,2,1,1,1]))
print(s.findLengthOfShortestSubarray([1,2,3]))
print(s.findLengthOfShortestSubarray([6,3,10,11,15,20,13,3,18,12]))
