def solution(xs):
    if(len(xs) == 0):
        return str(0)

    if(len(xs) == 1):
        return str(xs[0])
    

    length = len(xs)
    pos_product = 1
    negative_product_even = 1
    negative_product_odd = 1
    
    neg_numbers,pos_numbers = [x for x in xs if x<0],[y for y in xs if y >0]
    
    negative_len = len(neg_numbers)
    positive_len = len(pos_numbers)
    # neg_numbers = sorted(neg_numbers)

    if negative_len == 1 and positive_len == 0:
        return str(0)
    
    if negative_len == 0 and positive_len == 0:
        return str(0)

    max_product = 1
    for pos_val in pos_numbers:
        max_product *= pos_val
        
    if(negative_len % 2 == 1):
        neg_numbers.remove(max(neg_numbers))
        
    for nums in neg_numbers:
        max_product *= nums

    return str(max_product)

xss = [0]
print ("MAX : ", solution(xss))
