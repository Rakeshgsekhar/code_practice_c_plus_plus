def insertNodeAtPosition(head, data, position):
    if position == 0:
        newNode = SinglyLinkedListNode(data)
        newNode.next = head
        head = newNode
        return head
    else:
        counter = 0
        temp = head
        prev = temp
        while temp.next != None and counter != position:
            prev = temp
            temp = temp.next
            counter += 1
            if (counter == position):
                newNodePosition = SinglyLinkedListNode(data)
                newNodePosition.next = prev.next
                prev.next = newNodePosition
        return head
