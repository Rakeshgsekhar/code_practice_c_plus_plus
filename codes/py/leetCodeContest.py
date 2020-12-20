class Solution:
    def reformatNumber(self, number: str) -> str:
        number = number.replace(' ','')
        number = number.replace('-','')
        print (number)
        n = len(number)
        result = ""
        if(n==2):
            return number
        else:
            while(n > 0):
                if n > 4:
                    result = result+str(number[:3])
                    result =result+str('-')
                    number = number[3:]
                    print(number)
                    n = n -3
                elif n == 3:
                    result = result+str(number[:3])
                    result =result+str('-')
                    number = number[3:]
                    print(number)
                    n = n -3
                elif n<=4 and n != 3:
                    result = result+str(number[:2])
                    result = result+str('-')
                    number = number[2:]
                    print(number)
                    n = n-2
        if(result[len(result)-1] == '-'):
            result = result[:len(result)-1]
        return result

s = Solution()
print(s.reformatNumber("123 4-567"))