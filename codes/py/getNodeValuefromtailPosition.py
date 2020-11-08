def getNode(head, positionFromTail):
    memo = {}
    count = 0
    if head is None :
        return None
    else:
        temp = head
        while temp is not None:
            memo[count] = temp.data
            count += 1
            temp = temp.next
    # print(memo)
    result = memo[count - positionFromTail-1]
    print(result)
    return result