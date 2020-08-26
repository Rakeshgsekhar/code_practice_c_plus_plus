def heapify(arr,n,largst):
    largest = largst
    left = 2*largst + 1
    right = 2*largst + 2


    if left < n and arr[largst]<arr[left]:
        largest = left
    if right < n and arr[largest]<arr[right]:
        largest = right

    if largest != largst:
        arr[largst],arr[largest] = arr[largest],arr[largst]
        heapify(arr,n,largest)


def heapSort(arr):
    n = len(arr)

    for i in range(n//2,-1,-1):
        heapify(arr,n,i)

    for i in range(n-1,0,-1):
        arr[i],arr[0] = arr[0],arr[i]
        heapify(arr,i,0)

arr = [1,12,9,5,6,10]
print(arr)
heapSort(arr)
print(arr)
