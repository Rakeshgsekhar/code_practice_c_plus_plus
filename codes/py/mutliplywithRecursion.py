def multiply(a,n):
    if n ==  0:
        return 0
    if n < 0:
        return 0 - (multiply(a,-n))
    
    return a+ multiply(a,n-1)
    

a=2
n=3
print(multiply(a,n))
print(multiply(2,-3))



        
        
