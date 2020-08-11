class Solution:
    def maxArea(self, height):
        left = 0
        right = len(height)-1
        maxArea = 0
        while left < right:
            minheight = min(height[left],height[right])
            area = minheight * (right-left)
            #print(height[left])
            if maxArea<area:
                maxArea = area
            if height[left] < height[right]:
                left+=1
            else:
                right-=1
        return maxArea


s = Solution()
print(s.maxArea([1,8,6,2,5,4,8,3,7]))
