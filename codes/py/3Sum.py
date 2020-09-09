class Solution:
    def threeSum(self, nums):
        memo = {}
        nums = sorted(nums)
        result = []
        for i in range(0,len(nums)):
            j = i+1
            k = len(nums)-1
            if i>0 and nums[i] == nums[i-1]:
                continue
            while j<k:
                if k<len(nums)-1 and nums[k] == nums[k+1]:
                    k-=1
                    continue
                if nums[i]+nums[j]+nums[k] > 0:
                    k-=1
                elif nums[i]+nums[j]+nums[k] < 0:
                    j+=1
                elif nums[i]+nums[j]+nums[k] == 0 and [nums[i],nums[j],nums[k]] not in result:
                    lis = []
                    lis.append(nums[i])
                    lis.append(nums[j])
                    lis.append(nums[k])
                    result.append(lis)
                    j+=1
                    k-=1
        
        return result


s = Solution()
print(s.threeSum([-1, 0, 1, 2, -1, -4]))

# Better implementatio Time Complexity O(N^2) yes pretty good, :)
