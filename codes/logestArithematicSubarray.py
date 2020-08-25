def findLongestsubarray():
    n = int(input())
    vals = input()
    vals = vals.split()
    vals = [int(c) for c in vals]
    #vals = sorted(vals)
    max_val = 1
    result = {}
    #for i in range(len(vals)):
        #result[i] ={}
    #print(result)
    for i in range(len(vals)):
        result[i] ={}
        currentVal = vals[i]
        current = result[i]
        for j in range(i):
            diff = currentVal - vals[j]
            prev = result[j]
            if diff in prev :
                value = prev[diff]
                current[diff] = value+1
                #current[diff] = prev[diff]+1
            else:
                value = 0
                current[diff] = value+1
                break
                #current[diff] = 1
            #current[diff] = value+1
            result[i] = current
            max_val =  max(max_val,current[diff])
    #print(result)
    return (max_val+1)

t = int(input())
for i in range(t):
    val = findLongestsubarray()
    print("Case #"+str(i+1)+": "+str(val))
        
