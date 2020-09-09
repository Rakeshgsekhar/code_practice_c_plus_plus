class Solution:
    def maxDistance(self, position:, m):
        minForce = 0
        for i in range(1,len(position)):
            abst = abs(position[i] - postion[i-1])
            if abst >= minForce:
                minForce = abst
            return abst
                
