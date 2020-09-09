class Solution:
    def pancakeSort(self, A):
        N = len(A)
        result = []
        k = N
        while k > 0:
            #kmax = max(A)
            if k != A[k-1]:
                idx = A[:k].index(k) + 1
            #A[idx],A[k-1] = A[k-1],A[idx]
                result.append(idx)
                result.append(k)
                A = A[:idx][::-1] + A[idx:]
                A = A[:k][::-1] + A[k:]
            k -= 1
        print(A)    
        print(result)
        return result

s = Solution()
s.pancakeSort([3,2,1,4])
s.pancakeSort([3,2,4,1])         
