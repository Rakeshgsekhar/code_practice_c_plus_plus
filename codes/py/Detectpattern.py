import collections
class Solution:
    def containsPattern(self, arr, m, k):
        N = len(arr)
        pattern = arr[:m]
        count = 0
        #k = 0
        current_count = 1
        i = 0 + m
        for i in range(0+m,N):
        #while i < N:
            #j= i+m
            
            #print(pattern)
            #print(arr[i:i+m])
            if i < N and arr[i:i+m] == pattern:
                #print(arr[i:i+m])
                #print(pattern)
                current_count += 1
                #print(current_count)
                #i = i + m
                i = count + 1
                count +=1
                if current_count >= k :
                    return True
            else:
                i = count+1
                #i += 1
                count +=1
                pattern = arr[i:i+m]
                current_count = 1
            #print(current_count)
        return False
                
S = Solution()
print(S.containsPattern([1,2,4,4,4,4],1,3))
print(S.containsPattern([1,2,1,2,1,1,1,3],2,2))
print(S.containsPattern([1,2,1,2,1,3],2,3))
print(S.containsPattern([2,2],1,2))
print(S.containsPattern([1,2,3,1,2],2,2))
print(S.containsPattern([2,2,2,2],2,3))
print(S.containsPattern([2,1,2,2,2,2,2,2],2,2))
print(S.containsPattern([2,2,1,2,2,1,1,1,2,1],2,2))
print(S.containsPattern([1,2,2,2,1,1,2,2,2],1,3))
print(S.containsPattern([3,2,2,1,2,2,1,1,1,2,3,2,2],3,2))
print(S.containsPattern([2,1,1,2,2,1,2,2,1,2],1,3))
