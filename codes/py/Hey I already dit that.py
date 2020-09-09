def to_base_n(list_10, n):
    m = int(list_10)
    base_n = []
    while m != 0:
        k = m%n;
        base_n.append(str(k))
        m = m // n

    result = ''.join(base_n[::-1])
    return result


def to_base_10(list_n, n):
    x = list(list_n[::-1])
    y_base_10 = 0
    for i, a in enumerate(x):
        y_base_10 += int(a) * (n ** i)
    return str(y_base_10)

def solution(n, b):
    k = len(n)
    m = n
    mini_id = []
    while m not in mini_id:
        mini_id.append(m)
        s = sorted(m)
        x_descend = ''.join(s[::-1])
        y_ascend = ''.join(s)        
        if b == 10:
            int_m = int(x_descend) - int(y_ascend)
            m = str(int_m)
        else:
            int_m_10 = int(to_base_10(x_descend, b)) - int(to_base_10(y_ascend, b))
            m = to_base_n(str(int_m_10), b)

        m =  (k - len(m)) * '0' + m
        #print (m)
    return len(mini_id) - mini_id.index(m)

print (solution('210022', 3))
