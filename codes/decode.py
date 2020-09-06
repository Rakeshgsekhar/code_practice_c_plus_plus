def decode(s,index):
    n = len(s)
    memo = [-1]*n
    if index < 0:
        return -1
    if index == 0:
        if s[index] == 0:
            return 0
        else:
            return 1
    if memo[index] not -1:
        return memo[index]
    else:
        w1= 0
        pair = 0
        if s[index] == 0:
            w1 = 0
        else:
            w1 = 1

        if s[index-1] == 0:
            pair = 0
        
        
        
