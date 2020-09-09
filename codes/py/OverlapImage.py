class Solution:
    def largestOverlap(self, A, B):
        N = len(A)
        def shiftImage(x_shift,y_shift):
            num = 0
            for r in range(N):
                for c in range(N):
                    if 0<= c+x_shift<N and 0<=r+y_shift<N and A[r+y_shift][c+x_shift] == 1 and B[r][c] == 1:
                        num += 1
            return num

        return max([shiftImage(x,y) for y in range(-N,N) for x in range(-N,N)])

s = Solution()
A = [[1,1,0],[0,1,0],[0,1,0]]
B = [[0,0,0],[0,1,1],[0,0,1]]
print(s.largestOverlap(A,B))
