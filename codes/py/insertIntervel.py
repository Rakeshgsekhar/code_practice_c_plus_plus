class Solution:
    def insert(self, intervals, newInterval):
        start_interval = 0
        end_intervel = 0

        for i in range(len(intervels)):
            if i[0]< newInterval[0]:
                start_interval = i
            if newInterval[1] > i[0]:
                end_interval = i
        print(start_interval,end_interval)

s =Solution()
s.insert([[1,3],[6,9]]
