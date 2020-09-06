def partyCouples(n):
    memo = {}
    if n == 1 or n == 0:
        return n
    #if n == 3:
        #return 4
    if n in memo:
        return memo[n]
    else:
        memo[n] = partyCouples(n-1) + partyCouples(n-2)*(n-1)
        return memo[n]

print(partyCouples(4))
print(partyCouples(5))
