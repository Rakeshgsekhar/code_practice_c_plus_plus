def multiply(a,n):
    if n ==0 :
        return a
    a += a
    #print(a)
    return multiply(a,n-1)

k = 2
N = 5
print(multiply(k,N-1))
