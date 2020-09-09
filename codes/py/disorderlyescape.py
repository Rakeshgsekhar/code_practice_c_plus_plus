from collections import Counter

def gcd (x,y):
    if x<y:
        x,y = y,x
    while(y):
        x,y = y,x%y

    return x

def findFactorial(num):
    memo={}
    facto = 1
    temp = num
    if(num ==0):
        return 1
    if num not in memo:
        for i in range(1,num+1):
            facto *=i
            memo[num] = facto
        return facto
    else:
        return memo[num]
    
def findcycles(c, n):
    cc=findFactorial(n)
    #print(c)
    for a, b in Counter(c).items():
        #print(a,b)
        cc//=(a**b)*findFactorial(b)
    return cc        

def partitions(n, i=1):
    yield [n]
    for i in range(i, n//2 + 1):
        for p in partitions(n-i, i):
            yield [i] + p
            
def solution(w, h, s):
    # Your code here    
    grid=0
    for widthCycle in partitions(w):
        for heightCycle in partitions(h):            
            m=findcycles(widthCycle, w)*findcycles(heightCycle, h)
            grid+=m*(s**sum([sum([gcd(i, j) for i in widthCycle]) for j in heightCycle]))
              
    return grid//(findFactorial(w)*findFactorial(h))

print(solution(2, 3, 4))
