class Solution:
    def maxCoins(self, piles):
        temp = piles
        temp = sorted(temp)
        count = 0
        idx = len(temp)
        if len(temp) == 3:
            print(temp[1])
            return temp[1]
        else:
            n = len(temp)//3
            k = 0
            while k < n:
                idx -=2
                count +=temp[idx]
                k +=1
        print(count)
        return count

s = Solution()
s.maxCoins([2,4,5])
s.maxCoins([9,8,7,6,5,1,2,3,4])
s.maxCoins([2,4,1,2,7,8])
        #while len(temp)>0:

            #temp_list = []
            #temp_list.append(temp.pop(0))
            #temp_list.append(temp.pop())
            #.append(temp.pop())
            
            
