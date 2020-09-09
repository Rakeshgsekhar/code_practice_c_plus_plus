class Solution:
    def largestComponentSize(self, A):
        memo = {}
        def compute_hcf(x, y):
            if x > y:
                hcf = y
            else:
                hcf = x
            for i in range(2, hcf):
                if((x % i == 0) and (y % i == 0)):
                    hcf = i 
            return hcf
        
        def gcd(a,b):
            if b == 0 :
                return a
            return gcd(b,a//b)
        for i in range(len(A)-1):
            #for j in range(i,len(A)):
            comfactor = compute_hcf(A[i],A[i+1])
            if comfactor in memo:
                memo[comfactor].add(A[i])
                memo[comfactor].add(A[i+1])
            else:
                memo[comfactor] = set()
                memo[comfactor].add(A[i])
                memo[comfactor].add(A[i+1])
        print(memo)
s= Solution()
s.largestComponentSize([4,6,15,35])
s.largestComponentSize([20,50,9,63])
s.largestComponentSize([2,3,6,7,4,12,21,39])
