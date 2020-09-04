class Solution:
    def partitionLabels(self, S):
        result = []
        if len(S) == 0:
            return []
        charS = [char for char in S]
        seen = set()
        right = [0]*26
        for i in charS:
            right[ord(i)-ord('a')]+=1
        count = 0
        for c in charS:
            count+=1
            seen.add(c)
            right[ord(c)-ord('a')] -= 1
            if right[ord(c)-ord('a')] == 0:
                seen.remove(c)
                if not seen:
                    result.append(count);
                    count = 0
        return result

s = Solution()
print(s.partitionLabels("ababcbacadefegdehijhklij"))
