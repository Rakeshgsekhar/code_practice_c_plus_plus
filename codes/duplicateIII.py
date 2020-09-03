import collections
class Solution:
    def containsNearbyAlmostDuplicate(self, nums, k, t):
        #BucketSort
        if k < 1 or t < 0:
            return False
        w = t+1
        buckets = collections.OrderedDict()
        for n in nums:
            #n = nums[i]
            #idx = getId(n,w)
            key = n//t if t else n
            print(key)
            #if idx in buckets:
                #return True
            #if idx - 1 in buckets and -t <= n-buckets[idx-1] <= t:
                #return True
            #if idx + 1 in buckets and -t <= n-buckets[idx+1] <= t:
              #  return True
            #buckets[idx] = n
            #if i >= k:
              #  del buckets[getId(nums[i-k],w)]
            for m in [buckets.get(key-1),buckets.get(key),buckets.get(key+1)]:
                if m != None and abs(n-m) <= t:
                    return True
            if len(buckets) == k:
                    buckets.popitem(last=False)
            buckets[key] = n
        return False
s= Solution()
#print(s.containsNearbyAlmostDuplicate([1,2,3,1],3, 0))
#print(s.containsNearbyAlmostDuplicate([1,0,1,1],1,2))
print(s.containsNearbyAlmostDuplicate([1,5,9,1,5,9],2,3))
