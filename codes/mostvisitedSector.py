class Solution:
    def mostVisited(self, n, rounds):
        sectors = [x+1 for x in range(n)]
        #print(sectors)
        visited = {}
        for v in sectors:
            visited[v] = 0
        def run(startval,endval):
            idx = sectors.index(startval)
            while sectors[idx] != endval:
                #print("idx "+str(sectors[idx]))
                #print("end "+str(endval))
                visited[sectors[idx]] += 1
                idx += 1
                if idx == len(sectors):
                    idx = 0

            #if sectors[idx] == endval:
                #visited[sectors[idx]] += 1
        for i in range(1,len(rounds)):
            start = rounds[i-1]
            end = rounds[i]
            #print(start)
            #print(end)
            run(start,end)
        #visited[rounds[0]] += 1
        visited[rounds[len(rounds)-1]] += 1
        max_val = max(visited.items(),key=lambda x:x[1])
        result = []
        for key,value in visited.items():
            if value == max_val[1]:
                result.append(key)
        return result
s = Solution()
s.mostVisited(4,[1,3,1,2])
s.mostVisited(2,[2,1,2,1,2,1,2,1,2])
s.mostVisited(7,[1,3,5,7])
