def to_base_10(number, n ):
    num = list(number)
    number = number[::-1]
    base_10 = 0
    for i,k in enumerate(number):
        base_10 += int(k) * (n**i)
        
    print(str(base_10))
    return str(base_10);

def to_base_n(number , n):
    m = int(number)
    base_n = []
    while m != 0:
        k = m%n;
        base_n.append(str(k))
        m = m // n

    result = ''.join(base_n[::-1])
    print(result)
    return 0

def to_base_nM(list_10, n):
    digits = int(list_10)
    digits_base_n = []
    while digits >= n:
        r = digits % n
        digits_base_n.append(str(r))
        digits = (digits - r) // n
    digits_base_n.append(str(digits))
    res = ''.join(digits_base_n[::-1])
    print(res)
    return 0

        

response = to_base_10('210022',3)
to_base_n(response,3)
to_base_nM(response,3)
    
