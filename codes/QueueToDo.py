def XOR(n):
    val = n%4
    if val ==0:
        return n
    elif val == 1:
        return 1
    elif val == 2:
        return n+1
    return 0

def solution(start, length):
    if length == 1:
        return start
    val = XOR(start+ 2*(length-1))
    if start > 1:
        val = val^XOR(start-1)
    for i in range(length-2):
        elements = length-2-i
        init = start + length*(2+i) -1
        val = val^XOR(init +elements) ^ XOR(init)
    return val

print(solution(0, 3))
