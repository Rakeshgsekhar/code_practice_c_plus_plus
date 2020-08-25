def findLongestsubarray():
    n = int(input())
    if n <=2 :
        return n
    vals = list(map(int, input().split()))
    max_val = 1
    results = {}
    for i in range(n):
        results[i] = {}
    for i in range(len(vals)-1):
        j = i + 1
        diff = vals[j] - vals[i]
        if diff in results[i]:
            results[j][diff] =results[i][diff] +1
        else:
            results[j][diff] = 2
            i = j
            #break
        
        max_val = max(max_val,results[j][diff])

    return max_val
    
t = int(input())
for i in range(t):
    val = findLongestsubarray()
    print("Case #"+str(i+1)+": "+str(val))
        
