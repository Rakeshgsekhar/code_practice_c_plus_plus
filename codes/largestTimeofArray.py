import itertools
class Solution:
    def largestTimeFromDigits(self, A):
        return max(("%d%d:%d%d" %time for time in itertools.permutations(A) if time[:2] <(2,4) and time[2]<6),default="")
s = Solution()
print(s.largestTimeFromDigits([1,2,3,4]))
print(s.largestTimeFromDigits([5,5,5,5]))
print(s.largestTimeFromDigits([0,0,0,0]))
print(s.largestTimeFromDigits([2,0,0,4]))
print(s.largestTimeFromDigits([0,0,3,0]))
