import collections
class StreamChecker:

    def __init__(self, words):
       #self.words = words
        self.trie = {}
        for word in words :
            cur = self.trie
            for chrs in word:
                if chrs not in cur:
                    cur[chrs] = {}
                cur = cur[chrs]
            cur['#'] = True
        self.stream = collections.deque()
        print(self.trie)

    def query(self, letter) -> bool:
        temp = collections.deque()
        self.stream.append(self.trie)
        for p in self.stream:
            if letter in p:
                temp.append(p[letter])
        self.stream = temp
        for p in self.stream:
            if '#' in p:
                return True
        return False


# Your StreamChecker object will be instantiated and called as such:
obj = StreamChecker(["cd","f","kl"])
#param_1 = obj.query("a")
#print(param_1)
print(obj.query("b"))
print(obj.query("c"))
print(obj.query("d"))
print(obj.query("e"))
print(obj.query("f"))
print(obj.query("g"))
print(obj.query("h"))
print(obj.query("i"))
print(obj.query("j"))
print(obj.query("k"))
print(obj.query("l"))
