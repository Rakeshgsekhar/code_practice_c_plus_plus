class Solution:
    def sortElements(self,array,left,right):
        i = left-1
        pivot = array[right]
        print(pivot)
        for j in range(left,right):
            if array[j] <= pivot :
                i = i+1
                array[i],array[j] = array[j],array[i]
        array[i+1],array[right] = array[right],array[i+1]
        print(array)
        return i+1

    
    def quickSort(self,array,left,right):
        # pivotIndex = int((right-left)/2)
        # pivotElemnt = array[pivotIndex]
        if left < right:
            pivotIndex = self.sortElements(array,left,right)

            self.quickSort(array,left,pivotIndex-1)
            self.quickSort(array,pivotIndex+1,right)


array = [29,99,27,41,66,28,44,78,87,19,31,76,58,88,83,97,12,21,44]
right = len(array)
s= Solution()
s.quickSort(array,0,right-1)

print(array)
