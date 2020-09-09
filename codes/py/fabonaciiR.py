def febonaci(n):
    memo = {}
    #memo[0] = 0
    #memo[1] = 1
    if n == 0:
        return 0
    if n == 1:
        return 1
    if n in memo:
        return memo[n]
    else:
        memo[n] = febonaci(n-1)+febonaci(n-2)
        return memo[n] # febonaci(n-1)+febonaci(n-2)
       # = val
    
print(febonaci(10))
