class Solution:
    def threeSum(self, nums):
        #nums = sorted(nums)
        result = []
        checkset = set()
        for i in range(0,len(nums)):
            for j in range(i+1,len(nums)):
                for k in range(j+1,len(nums)):
                    check = sorted([nums[i],nums[j],nums[k]])
                    check = ''.join([str(x) for x in check])
                    if nums[i]+nums[j]+nums[k] == 0 and check not in checkset :
                        lis = []
                        lis.append(nums[i])
                        lis.append(nums[j])
                        lis.append(nums[k])
                        result.append(lis)
                        checkset.add(check)
        return result


s = Solution()
print(s.threeSum([-1, 0, 1, 2, -1, -4]))

# worst case implementation Time complexity : O(N^3) and thats pretty bad. :)
