class Solution:
    def numSpecial(self, mat):
        n = len(mat)
        m = len(mat[0])
        count = 0
        def readPositions(matrix,n,m):
            positions = {}
            for i in range(n):
                for j in range(m):
                    positions[(i,j)] = matrix[i][j]
            #print(positions)
            return positions
        def checkRow(matrix,i,j,n):
            for k in range(n):
                #print(i,k,matrix[i][k])
                if matrix[i][k] != 0 and k !=j:
                    return False
            return True
        def checkColume(matrix,j,i,m):
            for k in range(m):
                if matrix[k][j] != 0 and k != i:
                    return False
            return True
        dp = readPositions(mat,n,m)
        for k in dp:
            if dp[k] == 1:
                lsk = list(k)
                #print(lsk)
                if checkRow(mat,lsk[0],lsk[1],m) and checkColume(mat,lsk[1],lsk[0],n) :
                    count += 1
        print(count)
        return count
                


s = Solution()
s.numSpecial([[1,0,0],[0,0,1],[1,0,0]])
s.numSpecial([[1,0,0],[0,1,0],[0,0,1]])
s.numSpecial([[0,0,0,1],[1,0,0,0],[0,1,1,0],[0,0,0,0]])
s.numSpecial([[0,0],[0,0],[1,0]])
                    
