import collections
class Solution:
    def orangesRotting(self, grid) -> int:
        print(grid)
        row = len(grid)
        column = len(grid[0])
        queue = collections.deque()
        fresh = 0
        minits = 0
        for i in range(row):
            for j in range(column):
                if grid[i][j] == 1:
                    fresh += 1
                elif grid[i][j] == 2:
                    queue.append((i,j))

        if fresh == 0: return 0        

        while queue:
            for _ in range(len(queue)):
                x, y = queue.popleft()
                for dx, dy in [(-1,0),(1,0),(0,-1),(0,1)]:
                    if 0<=x+dx<row and 0<=y+dy<column and grid[x+dx][y+dy] == 1:
                        grid[x+dx][y+dy] = 2
                        queue.append((x+dx, y+dy))
                        fresh -= 1
            minits += 1
        return minits -1 if fresh == 0 else -1
        

        

s = Solution()
print(s.orangesRotting([[2,1,1],[1,1,0],[0,1,1]]))
