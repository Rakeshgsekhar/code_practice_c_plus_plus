def ruleCount(n,k):
    count = 0
    #arr = map(int,input().split())
    arr = input()
    arr = arr.split(' ')
    arr = [int(x) for x in arr]
    #print(arr)
    arr = [arr[i] for i in range(len(arr)) if i == 0 or arr[i - 1] != arr[i]]
    #memo = {"first":1,"second":4
    highernote = 0
    lowernote = 0
    #print(arr)
    for i in range(1,len(arr)):
        if arr[i] > arr[i-1]:
            highernote +=1
            lowernote = 0
        elif arr[i] < arr[i-1]:
            lowernote += 1
            highernote =0

    if highernote > 3 or lowernote > 3:
        count += 1
        highernote = lowernote = 0
        
    print("Case # "+str(k+1)+": "+str(count))


def solve():
    k = input()
    a = input()
    a= a.split(' ')
    a = [int(x) for x in a]
  # Filter out repeated notes.
    a = [a[i] for i in range(0, int(k)) if i == 0 or a[i - 1] != a[i]]
    upCount = 0
    downCount = 0
    violations = 0
    for i in range(1, len(a)):
        if a[i] > a[i - 1]:
            upCount += 1
            downCount = 0
        else:
            downCount += 1
            upCount = 0
        if upCount > 3 or downCount > 3:
            violations += 1
            upCount = downCount = 0
    return str(violations)

t = int(input())
for i in range(t):
    #n = int(input())
    #ruleCount(n)
    result = solve()
    print("Case # "+str(i+1)+": "+result)
