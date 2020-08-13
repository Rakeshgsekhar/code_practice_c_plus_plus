class CombinationIterator:
    comb=[]
    def combinations(self,array,length,pervArray =[]):
        if len(pervArray) == length:
            return [pervArray]
        combination = []
        for i,val in enumerate(array):
            pervArray_extended = pervArray.copy()
            pervArray_extended.append(val)
            combination += self.combinations(array[i+1:],length,pervArray_extended)
        return combination

    def __init__(self, characters: str, combinationLength: int):
        arr = [char for char in characters]
        self.comb = self.combinations(arr,combinationLength)
        

    def next(self) -> str:
        res = self.comb.pop()
        res = ''.join(res)
        return res

    def hasNext(self) -> bool:
        return len(self.comb)!=0

obj = CombinationIterator("abc", 2)
param_1 = obj.next()
print(param_1)
param_2 = obj.hasNext()
print(param_2)
        

