class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        pooling = []
        for people,start,end in trips:
            pooling.append((start,people,1))
            pooling.append((end,people,0))
        
        pooling.sort(key=lambda x: (x[0],x[2]))
        numberofpeople = 0
        for time,people,pickup in pooling:
            if pickup:
                numberofpeople += people
            else:
                numberofpeople -= people
            if numberofpeople > capacity: return False
        
        return True
