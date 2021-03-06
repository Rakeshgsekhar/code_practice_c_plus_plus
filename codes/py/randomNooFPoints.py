class Solution(object):

    def __init__(self, rects):
        self.rects = rects
        self.N = len(rects)
        areas = [(x2 - x1 + 1) * (y2 - y1 + 1) for x1, y1, x2, y2 in rects]
        self.preSum = [0] * self.N
        self.preSum[0] = areas[0]
        for i in range(1, self.N):
            self.preSum[i] = self.preSum[i - 1] + areas[i]
        self.total = self.preSum[-1]

    def pickRect(self):
        rand = random.randint(0, self.total - 1)
        return bisect.bisect_right(self.preSum, rand)

    def pickPoint(self, rect):
        x1, y1, x2, y2 = rect
        x = random.randint(x1, x2)
        y = random.randint(y1, y2)
        return x, y
        
    def pick(self):
        rectIndex = self.pickRect()
        rect = self.rects[rectIndex]
        return self.pickPoint(rect)
