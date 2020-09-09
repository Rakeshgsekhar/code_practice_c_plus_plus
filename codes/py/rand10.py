# The rand7() API is already defined for you.
# def rand7():
# @return a random integer in the range 1 to 7

class Solution:
    def rand10(self):
        """
        :rtype: int
        """
        randNum = 40
        while randNum >= 40:
            randNum = (rand7()-1)*7 + (rand7()-1)

        return randNum % 10 + 1

s = Solution()
print(s.rand10())
print(s.rand10())
print(s.rand10())
print(s.rand10())
print(s.rand10())
print(s.rand10())
print(s.rand10())
print(s.rand10())
print(s.rand10())
