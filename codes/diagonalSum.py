class Solution:
    def diagonalSum(self, mat):
        n = len(mat)
        memo = []
        prim = 0
        secn = 0
        for i in range(0,n):
            for j in range(0,n):
                if i == j and [i,j] not in memo:
                    memo.append([i,j])
                    prim += mat[i][j]
                if (i+j) == (n-1) and [i,j] not in memo:
                    memo.append([i,j])
                    secn += mat[i][j]
        result = prim+secn
        return result

s = Solution()
print(s.diagonalSum([[1,2,3],[4,5,6],[7,8,9]]))
print(s.diagonalSum([[1,1,1,1],[1,1,1,1],[1,1,1,1],[1,1,1,1]]))

        
