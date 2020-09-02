import itertools
class Solution:
    def largestTimeFromDigits(self, A):
        N = len(A)
        hr = []
        times = []
        finalList = []
        for i in range(N):
            for j in range(N):
                if i != j:
                    val = str(A[i])+str(A[j])
                    hr.append(val)
        hr = sorted(hr)
        for k in range(len(hr)):
            for l in range(len(hr)):
                if k != l:
                    values = str(hr[k])+str(hr[l])
                    times.append(values)

        xs = []
        xss=[]
        for i in times:
            if i == 0:
                finalList.append(i)
            else:
                t = str(i)
                if(int(t[0]),int(t[1])) < (2,4):
                    xs.append([int(t[0]),int(t[1])])
                    if int(t[2]) not in xs and int(t[3]) not in xs:
                        xss.append(([int(t[2]),int(t[3])]))
                    else:
                        xss.append([-1])
        if len(xs) == 0:
            return ""
        hr = max(xs)
        temp = A
        temp.remove(hr[0])
        temp.remove(hr[1])
        mm = "-1"
        for i in range(2):
            for j in range(2):
                if i != j:
                    val = str(temp[i])+str(temp[j])
                    if int(val)> int(mm) and int(val) < 60:
                        mm = val
        if mm == "-1":
            return ""
        final_time = str(hr[0])+str(hr[1])+":"+str(mm[0])+str(mm[1])
        return final_time
        
        
s = Solution()
print(s.largestTimeFromDigits([1,2,3,4]))
print(s.largestTimeFromDigits([5,5,5,5]))
print(s.largestTimeFromDigits([0,0,0,0]))
print(s.largestTimeFromDigits([2,0,0,4]))
print(s.largestTimeFromDigits([3,0,0,3]))
print(s.largestTimeFromDigits([1,9,6,0]))
print(s.largestTimeFromDigits([7,9,7,0]))
