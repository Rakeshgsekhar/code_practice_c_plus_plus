def gcd (x,y):
    if x<y:
        x,y = y,x
    while(y):
        x,y = y,x%y

    return x

def loopIn(guard1,guard2):
    totalBananas = (guard1+guard2)/gcd(guard1,guard2)
    if int(totalBananas) != totalBananas:
        return True
    totalBananas = int(totalBananas)
    return (totalBananas & (totalBananas-1)) != 0

#def pairQuard(

def solution(banana_list):
    length = len(banana_list)
    guards = [[None]*length for _ in range(length)]
    def pairGuards(guard,match,seen):
        for i in range(length):
            if guards[guard][i] and seen[i] == False:
                seen[i] = True
                if match[i] == -1 or pairGuards(match[i],match,seen):
                    match[i] = guard
                    return True
        return False

    for i in range(length):
        for j in range(i,length):
            guards[i][j] = loopIn(banana_list[i],banana_list[j])
            guards[j][i] = guards[i][j]

    guard = [-1]*length;
    guardCount = 0
    for i in range(length):
        seen = [False]*length
        if pairGuards(i,guard,seen):
            guardCount +=1

    return length - 2 * (guardCount//2)

print(solution([1,1]))
print(solution([1, 7, 3, 21, 13, 19]))
