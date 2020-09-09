class Solution:
    def distributeCandies(self, candies, num_people):
        result = [0 for i in range(0,num_people)]
        i=0
        k=1
        m=0
        val=0
        while m <= candies:
            if m+k <= candies:
               val = k
            else:
                val = candies-m
            result[i] += val
            i +=1
            if i == len(result):
                i = 0
            m += k
            k +=1   
        return result

        
s = Solution()
s.distributeCandies(7,4)
s.distributeCandies(10,3)
            
        
