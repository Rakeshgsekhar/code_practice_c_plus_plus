def countRecordBreakingDays(n,k):
    arr = []
    maxVal = -1
    count = 0
    #for i in range(n):
    val = input()
    val = val.split(' ')
    arr = [int(x) for x in val] 
    #arr.append(val)
    if n==1:
        count = 1
    else:
        for j in range(n-1):
            if arr[j] > maxVal:
                maxVal = arr[j]
                if arr[j] > arr[j+1]:
                    count+=1
        if arr[n-1] > maxVal:
            count += 1
    print("Case #"+str(k+1)+": "+str(count))


t = int(input())
for k in range(t):
    n = int(input())
    countRecordBreakingDays(n,k)
