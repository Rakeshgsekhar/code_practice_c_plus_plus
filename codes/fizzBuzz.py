class Solution:
    def fizzBuzz(self, n):
        result = []
        for i in range(n):
            if (i+1)%3 == 0 and (i+1)%5==0:
                result.append("FizzBuzz")
            elif (i+1)%3 == 0 and not (i+1)%5==0:
                result.append("Fizz")
            elif (i+1)%5 == 0 and not (i+1)%3==0:
                result.append("Buzz")
            else:
                result.append(str(i+1))
        return result
        #return ["Fizz"*((i+1)%3 == 0) + "Buzz"*((i+1)%5 == 0) or str((i+1)) for i in range(n)]

s = Solution()
print(s.fizzBuzz(15))
                
