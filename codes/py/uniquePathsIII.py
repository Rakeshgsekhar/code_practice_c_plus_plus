class Solution:
    def uniquePathsIII(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])
        
        start_row,start_col,end_row,end_col = 0,0,0,0
        empty = 0
        for r in range(m):
            for c in range(n):
                if grid[r][c] == 1:
                    start_row,start_col = r,c
                elif grid[r][c] == 2:
                    end_row,end_col = r,c
                elif grid[r][c] == 0:
                    empty += 1
        
        self.pathCount = 0
        visited = set()
        
        def dfs(r,c,visited,walk):
            if r == end_row and c == end_col:
                if walk == empty+1:
                    self.pathCount += 1
                return
            if 0<=r<m and 0<=c<n and grid[r][c] != -1 and (r,c) not in visited:
                visited.add((r,c))
                for i,j in [(0,-1),(0,1),(1,0),(-1,0)]:
                    dfs(r+i,c+j,visited,walk+1)
                visited.remove((r,c))
                
        dfs(start_row,start_col,visited,0)
        
        return self.pathCount
