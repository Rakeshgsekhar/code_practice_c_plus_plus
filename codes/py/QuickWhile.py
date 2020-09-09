class Solution:
    def sortElements(self,array,start,end):
        pivot = array[start]
        low = start + 1
        high = end
        print(pivot)
        while True:
            pivot
            while low <= high and array[high] >= pivot:
                high = high - 1
            while low <= high and array[low] <= pivot:
                low = low + 1
            if low <= high:
                array[low], array[high] = array[high], array[low]
            else:
                break

        array[start], array[high] = array[high], array[start]
        print(array)
        return high

    
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
