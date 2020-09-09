class Solution:
    def thousandSeparator(self, n):
        result = ""
        count = 0
        if n == 0:
            return str(n)
        elif n < 1000:
            return str(n)
        else:
            k = str(n)
            length = len(k)
            k = k[::-1]
            for i in range(0,length):
                #if i != 0:
                result +=k[i]
                count += 1   
                if count == 3 and i != length-1:
                    result = result+"."
                    count = 0
            return result[::-1]

s = Solution()
print(s.thousandSeparator(123456789))
