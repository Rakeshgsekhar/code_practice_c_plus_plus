class ListNode(object):
    def __init__(self, x):
        self.value = x
        self.next = None

def removeKFromList(l, k):
    curr = l
    while curr is not None:
        if curr.value != k:
            break
        curr = curr.next
    new_head = curr
    prev = None

    while curr is not None:
        if curr.value == k:
            if prev is not None:
                prev.next = curr.next
            curr = curr.next
            continue
        prev = curr
        curr = curr.next
    return new_head

node1 = ListNode(3)
node2 = ListNode(1)
node3 = ListNode(2)
node4 = ListNode(3)
node5 = ListNode(4)
node6 = ListNode(5)
#node1 = ListNode(x)
#node1 = ListNode(x)
node1.next=node2
node2.next=node3
node3.next=node4
node4.next=node5
node5.next=node6

nodeResult = removeKFromList(node1,3)

print(nodeResult)
while nodeResult != None:
    print(nodeResult.value,"->")
    nodeResult = nodeResult.next
