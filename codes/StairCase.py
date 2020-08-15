def solution(n):
    # Your code here
    arr = [[0 for i in range(n+1)] for j in range(n+1)]
    arr[0][0] = 1
    #index = len(arr)//2
    for i in range(1,(n+1)):
        for j in range(0,(n+1)):
            arr[i][j] = arr[i-1][j]
            if j >= i:
                arr[i][j] += arr[i-1][j-i]

    return arr[n][n]-1
            
    
print(solution(200))
