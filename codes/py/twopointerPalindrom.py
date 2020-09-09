def isPalindrom(string):
    chars = string.split()
    k= 0
    j = len(string)-1
    while k!=j:
        if string[k] != string[j]:
            return False
        k+=1
        j-=1

    return True


def isPalindromRecurcive(string):
    if string is None:
        return False
    if len(string) is 1 or len(string) is 0:
        return True
    return isPalindromRecurcive(string[1:len(string)-1]) and string[0] == string[len(string)-1]
print(isPalindrom("abbcdebba"))
print(isPalindromRecurcive("abbcbba"))
