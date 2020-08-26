class Solution:
    def mincostTickets(self, days, costs):
        deq7d = deque()
        deq30d = deque()
        cost = 0
        for d in days:
            while deq7d and deq7d[0][0] <= d-7: deq7d.popleft()
            while deq30d and deq30d[0][0] <= d-30: deq30d.popleft()
            deq7d.append((d,cost+cost[1]))
            deq30d.append((d,cost+cost[2]))
            cost = min(cost+cost[0],deq7d[0][1],deq30d[0][1])
        return cost
