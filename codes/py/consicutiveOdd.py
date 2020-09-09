class Solution:
    def threeConsecutiveOdds(self, arr):
        for i in range(1,len(arr)-1):
            if arr[i]%2 != 0 and arr[i-1]%2 != 0 and arr[i+1]%2 != 0:
                return True
        return False

s = Solution()
print(s.threeConsecutiveOdds([1,2,34,3,4,5,7,23,12]))
                
