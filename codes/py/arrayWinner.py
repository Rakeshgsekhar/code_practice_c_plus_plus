class Solution:
    def getWinner(self, arr, k):
        largest1 = arr[0]
        largest1Index = 0
        for i in range(1,len(arr)):
            if arr[i] > largest1:
                largest1 = arr[i]
                largest1Index = 0
            largest1Index += 1
            if  largest1Index== k:
                return largest1
        return largest1

s = Solution()
print(s.getWinner([2,1,3,5,4,6,7],2))
