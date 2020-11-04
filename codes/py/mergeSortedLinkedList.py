def mergeLists(head1, head2):
    mergedHead = SinglyLinkedListNode(0) # dummy node so can be handled the same
    merged = mergedHead

    while head1 != None or head2 != None:
        if head1 == None:
            merged.next = head2
            break
        elif head2 == None:
            merged.next = head1
            break
        else:
            if head1.data < head2.data:
                merged.next = head1
                head1 = head1.next
            else:
                merged.next = head2
                head2 = head2.next
        merged = merged.next

    return mergedHead.next