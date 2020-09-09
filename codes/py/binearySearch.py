def binerySearch(arr,searchElement,left,right):
    if(left > right):
        return False

    mid = (right+left)//2
    if arr[mid] == searchElement:
        return True
    elif searchElement < arr[mid]:
        return binerySearch(arr,searchElement,left,mid-1)
    else :
        return binerySearch(arr,searchElement,mid+1,right)

def findElement(arr,searchTerm):
    left = 0
    right = len(arr)
    arr = sorted(arr)

    return binerySearch(arr,searchTerm,left,right)


list_nums = [1,3,5,2,0,46,65,43,23,65,7,9,0,100,11029,3249]
print(findElement(list_nums,5))
print(findElement(list_nums,9999))
print(findElement(list_nums,1000))
print(findElement(list_nums,65))
print(findElement(list_nums,43))
print(findElement(list_nums,9))
