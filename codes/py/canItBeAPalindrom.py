NO_OF_CHARS = 256

def canItBePalindrom(strin):
    string = [char.lower() for char in strin if char != " "]
    count =[0]*(NO_OF_CHARS)
    for i in range(0,len(string)):
        count[ord(string[i])] = count[ord(string[i])]+1
    odd = 0
    for i in range(0,NO_OF_CHARS):
        if count[i]&1:
            odd +=1
        if odd > 1:
            return False
    return True
print(canItBePalindrom("Tact Cao"))
