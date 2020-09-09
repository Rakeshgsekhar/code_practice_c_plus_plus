class Solution:
    def eraseOverlapIntervals(self, intervals):
        count = 0
        joinedInterval = []
        intervals = sorted(intervals, key=lambda interval: interval[len(interval)-1])
        joinedInterval=intervals[0]
        print(intervals)
        for i in range(1,len(intervals)):
            set2 = intervals[i]
            if joinedInterval[len(joinedInterval)-1] <= set2[0]:
                joinedInterval=set2
            else:
                count +=1

        return count
    
s = Solution()
#print(s.eraseOverlapIntervals([[1,2],[2,3],[3,4],[1,3]]))
#print(s.eraseOverlapIntervals([[1,2],[1,2],[1,2]]))
print(s.eraseOverlapIntervals([[0,1],[3,4],[1,2]]))
print(s.eraseOverlapIntervals([[1,100],[11,22],[1,11],[2,12]]))
