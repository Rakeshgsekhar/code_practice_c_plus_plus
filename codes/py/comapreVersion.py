class Solution:
    def compareVersion(self, version1, version2):
        v1 = [int(k) for k in version1.split('.')]
        v2 = [int(k) for k in version2.split('.')]
        
        lv1 = len(v1)
        lv2 = len(v2)

        if lv1 > lv2:
            for i in range(lv2,lv1):
                v2.append(0)
        elif lv2 > lv1:
            for i in range(lv1,lv2):
                v1.append(0)
            
        for i in range(len(v1)):
            if v1[i]>v2[i]:
                return 1
            elif v2[i] > v1[i]:
                return -1
        
        return 0
            

s = Solution()
#print(s.compareVersion("1.01","1.001"))
#print(s.compareVersion("0.1","1.1"))
#print(s.compareVersion("1.0.1","1"))
#print(s.compareVersion("7.5.2.4","7.5.3"))
print(s.compareVersion("1.0","1.0.0"))
print(s.compareVersion("0.1","1.0"))
print(s.compareVersion("1","1.1"))
