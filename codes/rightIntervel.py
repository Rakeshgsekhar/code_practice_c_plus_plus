class Solution:
    def findRightInterval(self, intervals):
        sortedIntervels = []
        n = len(intervals)
        for i in range(n):
            sortedIntervels.append([intervals[i],i])
        sortedIntervels.sort()
        result = [-1]*n
        def binarySearch(x):
            if sortedIntervels[n-1][0][0] < x:
                return -1
            l,r = 0,n-1
            while l<=r:
                mid = l + (r-l)//2
                if sortedIntervels[mid][0][0] >= x :
                    r = mid-1
                else:
                    l = mid+1
            return sortedIntervels[l][1]

        for i in range(n):
            result[i] = binarySearch(intervals[i][1])

        return result
s = Solution()
print(s.findRightInterval([ [1,2] ]))
print(s.findRightInterval([ [3,4], [2,3], [1,2] ]))
print(s.findRightInterval([ [1,4], [2,3], [3,4] ]))
