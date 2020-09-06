class Solution:
    def findLengthOfShortestSubarray(self, arr):
        def isSorted(arr):
            for i in range(len(arr)-1):
                if arr[i] > arr[i+1]:
                    return False
            return True
        n = len(arr)
        e = n - 1
        s = 0
        if isSorted(arr):
            return 0
        for s in range(0,n-1):
            if arr[s] > arr[s+1]:
                break
        if s == n-1:
            return 0
        e = n-1
        while e > 0:
            if arr[e] <= arr[e-1]:
                break
            e -= 1
        maxval = arr[s]
        minval = arr[s]

        for i in range(s,e):
            if arr[i] <= maxval:
                maxval = arr[i]
                #print(maxval)
            if arr[i] <= minval:
                minval = arr[i]

        for i in range(s):
            if arr[i] >= minval:
                s = i
                break

        i = n-1
        while i > e:
            if arr[i] <= maxval:
                e = i
                break
            i -= 1
        res = arr[s:e]
        #print(res)
        v = len(res)
        while e > s:
            kr = arr[:s]+arr[e:]
            #print(arr[:s])
            #print(arr[e:])
            if isSorted(kr):
                samm = arr[s:e]
                v = min(v,len(samm))
                #print(v)
            e -= 1
            #s += 1
        #print(v)
        #return len(res)
        return v

s = Solution()
print(s.findLengthOfShortestSubarray([1,2,3,10,4,2,3,5]))
print(s.findLengthOfShortestSubarray([5,4,3,2,1]))#[2,2,2,1,1,1]
print(s.findLengthOfShortestSubarray([2,2,2,1,1,1]))
print(s.findLengthOfShortestSubarray([1,2,3]))
print(s.findLengthOfShortestSubarray([6,3,10,11,15,20,13,3,18,12]))
