def solution(x, y):
    # Your code here
    m,f = int(x),int(y)
    replication = 0
    while not (m ==1 and f==1):
        if m<=0 or f<=0:
            return "impossible"
        if f == 1:
            return str(replication+m-1)
        else:
            replication += (m/f)
            m,f = f,m%f

    return str(replication)


solution('2','1')
