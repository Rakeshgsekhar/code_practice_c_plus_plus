def solution(xs):
    n = len(xs)
    max_value  = 1
    min_value = 1
    max_product = 1
    falg =0

    for i in range(0,n):
        if(xs[i] > 0):
            max_value = max_value* xs[i]
            min_value = min(min_value* xs[i],1)
            flag = 1
        elif xs[i] == 0:
            max_value = max_value
            min_value = min_value
        else:
            temp = max_value
            max_value = max(min_value*xs[i],1)
            min_value = temp*xs[i]

        if(max_product < max_value):
            max_product = max_value

    if flag == 0 and max_product == 1:
        return 0
    return max_product


xss = [-2, -3, 4, -5]
print ("MAX : ", solution(xss))
