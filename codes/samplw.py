
# Python program to make all elements 
# of an Array equal by adding or 
# subtracting at most K 
  
# Function to equalize the array by 
# adding or subtracting at most K 
# value from each element 
def equalize(arr, n, k): 
  
    # Finding the minimum element 
    # from the array 
    min_ele = min(arr); 
  
    # Boolean variable to check if the 
    # array can be equalized or not 
    flag = True; 
  
    # Traversing the array 
    for i in range(n): 
  
        # Checking if the values lie 
        # within the possible range 
        # for each element 
        if (not((arr[i] + k) >= (min_ele + k) and 
            (min_ele + k) >= (arr[i] - k))) : 
  
            # If any value doesn't lie in 
            # the range then exit the loop 
            flag = False; 
            break; 
  
    if (flag):  
  
        # Value after equalizing the array 
        return min_ele + k; 
      
    # Array cannot be equalized 
    else: 
        return -1; 
  
# Driver code 
if __name__=='__main__':  
  
    K = 1; 
    arr = [ 1,3,5] ; 
    N = len(arr) 
  
    print(equalize(arr, N, K)) 
  
# This code is contributed by Princi Singh 
