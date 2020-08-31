import collections
class DisJoinSet:
    def __init__(self,n):
        self.nodes = list(range(n))

    def find(self,val):
        if self.nodes[val] != val:
            self.nodes[val] = self.find(self.nodes[val])
        return self.nodes[val]
    def union(self,set1,set2):
        s1,s2 = self.find(set1),self.find(set2)
        self.nodes[s1] = s2
        
class Solution:
    def largestComponentSize(self, A):
        memo = collections.defaultdict(list)
        def compute_hcf(x):
            for i in range(2, int(x**(1/2))+1):
                if((x % i == 0)):
                    return set([i]).union(compute_hcf(x//i)) 
            return set([x])
        for i in range(len(A)):
            #for j in range(i,len(A)):
            comfactor = compute_hcf(A[i])
            #primeSet = compute_hcf
            for prim in comfactor:
                memo[prim].append(i)
        N = len(A)
        dsu = DisJoinSet(N)
        for _,indexes in memo.items():
            for i in range(len(indexes)-1):
                dsu.union(indexes[i],indexes[i+1])
        listOfVals = [dsu.find(i) for i in range(N)]
        counters = collections.Counter(listOfVals).values()
        #count = max(collections.Counter([dsu.find(i) for i in range(N)]).values())
        #print(listOfVals)
        #print(counters)
        return max(counters)
s= Solution()
print(s.largestComponentSize([4,6,15,35]))
print(s.largestComponentSize([20,50,9,63]))
print(s.largestComponentSize([2,3,6,7,4,12,21,39]))
