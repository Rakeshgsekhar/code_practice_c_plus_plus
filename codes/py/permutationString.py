def isPermutation(str1,str2):
    #chars1 = [char for char in str1]
    #chars2 = [char for char in str2]
    if len(str1) != len(str2):
        return False
    chars1 = sorted(str1)
    chars2 = sorted(str2)
    #print(k)
    #chars1 = sorted(chars1)
    #chars2 = sorted(chars2)

    str11 = ''.join(chars1)
    str22 = ''.join(chars2)
    #print(str11)
    #print(str22)
    if str11 == str22:
        return True
    return False

print(isPermutation("abcd","dcab"))
print(isPermutation("abcdf","dcabe"))
print(isPermutation("abcd","dcabc"))
print(isPermutation("abcd","aaaa"))
