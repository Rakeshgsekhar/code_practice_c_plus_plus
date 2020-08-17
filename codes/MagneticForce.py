#implementing Binery Search
class Solution:
    def maxDistance(self, position, m):
        position.sort()
        length = len(position)

        def countBalls(d):
            n_balls,cur =1,position[0]
            for i in range(1,length):
                if position[i]-cur >=d:
                    n_balls +=1
                    cur = position[i]
            return n_balls

        left,right = 1, position[-1]-position[0]
        while left<=right:
            mid = (left+right)//2
            if countBalls(mid) >= m:
                left = mid+1
            else:
                right = mid-1

        return right


s = Solution()

print(s.maxDistance([1,2,3,4,7],3))
print(s.maxDistance([5,4,3,2,1,1000000000],2))
