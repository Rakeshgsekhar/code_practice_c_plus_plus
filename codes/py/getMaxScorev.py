class Solution:
    def DFS(self,G,v,seen=[],paths=[[]]):
        seen.append(v)
        if len(G[v]) == 0:
            paths.append(seen)
        for vertex in G[v]:
            if vertex not in seen:
                paths.append(seen)
                self.DFS(G,vertex,seen.copy(),paths)
        #print(paths)
        return paths
    def buildGraph(self,l1,l2):
        graph={}
        for i in range(len(l1)):
            if(i == len(l1)-1):
                graph[l1[i]]=[]
            else:
                key = l1[i]
                if key not in graph:
                    graph[key]=[]
                graph[key].append(l1[i+1])
        for i in range(len(l2)):
            if(i == len(l2)-1):
                graph[l2[i]]=[]
            else:
                key2 = l2[i]
                if key2 not in graph:
                    graph[key2]=[]
                graph[key2].append(l2[i+1])
        print(graph)
        return graph
    def Sum(self,lis):
        sumr = 0
        for i in lis:
            sumr+=i
        return sumr
    def maxSum(self, nums1, nums2):
        grph = self.buildGraph(nums1,nums2)
        all_pathsnum1 = self.DFS(grph,(nums1[0]))
        all_pathsnum2 = self.DFS(grph,(nums2[0]))
        #print(all_pathsnum1)
        max_len1 = max(self.Sum(p) for p in all_pathsnum1)
        max_len2 = max(self.Sum(p) for p in all_pathsnum2)
        result = max(max_len1,max_len2)
        return result
        
ss = Solution()
print(ss.maxSum([2,4,5,8,10],[4,6,8,9]))
  #[1,3,5,7,9][3,5,100]
