import collections
class Solution:
    def containsCycle(self, grid):
        visited = [[0]*len(grid[0]) for _ in  grid]
        print (visited)
        def isValid(i,j):
            if i<0 or i >= len(grid[0]) or j < 0 or j >= len(grid):
                return False
            return True
        def checkCycle(x,y):
            visited_grid = set()
            q = collections.deque()
            q.append(((x,y),(-1,-1)))
            #print(q)
            #print(len(q))
            while len(q):
                cell,prev_cell = q.popleft()
                i,j = cell[0],cell[1]
                per_i,per_j = prev_cell[0],prev_cell[1]

                #print(visited_grid)
                if (i,j) in visited_grid:
                    return True
                visited_grid.add((i,j))
                visited[j][i] = 1

                for (a,b) in [(i+1,j),(i-1,j),(i,j-1),(i,j+1)]:
                    if isValid(a,b) and not (a,b) == (per_i,per_j) and grid[b][a] == grid[j][i]:
                        q.append(((a,b),(i,j)))
                #print (visited)
            return False
            
        for x in range(len(grid[0])):
            for y in range(len(grid)):
                if visited[y][x] == 0 :
                    #print("check")
                    if checkCycle(x,y):
                        return True
                

        return False
s = Solution()
print(s.containsCycle([["a","a","a","a"],["a","b","b","a"],["a","b","b","a"],["a","a","a","a"]]))
