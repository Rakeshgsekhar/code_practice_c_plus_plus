def isUnique(S):
    #charStr =  [char for char in S]
    N = len(S)
    if N == 0:
        return False
    setStr = set()
    for i in range(N):
        if S[i].isalpha():
            setStr.add(S[i])
        else:
            return False
    if len(setStr)==N:
        return True
    return False
     #   for j in range(len(S)):
     #       if i != j and S[i] == S[j]:
     #           return False
    #return True
print(isUnique(""))
print(isUnique("abcdefg"))
print(isUnique("abcdefghijklmnopqrstuvwxyzz"))
