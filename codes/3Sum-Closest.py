class Solution:
    def threeSumClosest(self, nums, target):
        closest=''
        solution = float("infinity")
        nums = sorted(nums)
        for i in range(0,len(nums)-2):
            if i+1 < len(nums):
                j = i+1
                k = len(num)-1
                while j < k:
                    if abs(nums[i]+num[j]+num[k] - target) < solution:
                        solution = nums[i]+num[j]+num[k]
                    if abs(nums[i]+num[j]+num[k]) > target:
                        k-=1
                    else:
                        j+=1
        return solution
