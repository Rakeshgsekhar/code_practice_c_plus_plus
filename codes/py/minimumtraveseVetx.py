class Solution:
    def search(self,res,nodes,current,start,visited,curVisited):
        curVisited.add(current)
        visited.add(current)
        for nextNode in nodes[current]:
            if nextNode in res and nextNode != start:
                res.remove(nextNode)
            if nextNode not in curVisited:
                self.search(res,nodes,nextNode,start,visited,curVisited)
            
            
        
    def findSmallestSetOfVertices(self, n, edges):
        nodes = {}
        for i in range(n):
            nodes[i] = []
        for eds in edges:
            nodes[eds[0]].append(eds[1])
        visited = set()
        res = set()
        currentVisited = set()
        for i in range(n):
            if i not in visited:
                res.add(i)
                visited.add(i)
                self.search(res,nodes,i,i,visited,currentVisited)

        return list(res)

s=Solution()
s.findSmallestSetOfVertices(6,[[0,1],[0,2],[2,5],[3,4],[4,2]])
        
        
