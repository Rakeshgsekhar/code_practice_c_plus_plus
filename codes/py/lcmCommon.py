def gcd(a, b): 
    if (b == 0): 
        return a 
    return gcd(b, a % b) 
  
# Function to return max length of  
# subarray that satisfies the condition 
def maxLengthSubArray(arr, n): 
  
    maxLen = -1
    for i in range(n - 1): 
        for j in range(n): 
            lcm = arr[i] 
            product = arr[i] 
  
            # Update LCM and product of the 
            # sub-array 
            for k in range(i + 1, j + 1): 
                lcm = (((arr[k] * lcm)) // 
                    (gcd(arr[k], lcm))) 
                product = product * arr[k] 
              
            # If the current sub-array satisfies  
            # the condition 
            if (lcm == product):  
  
                # Choose the maximum 
                maxLen = max(maxLen, j - i + 1) 
    return maxLen 
  
# Driver code 
arr = [4,6,15,35]
n = len(arr) 
print(maxLengthSubArray(arr, n)) 
