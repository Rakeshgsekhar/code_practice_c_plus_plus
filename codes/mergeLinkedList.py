class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, l1, l2):
        header = temp = ListNode()
        while l1 or l2:
            if l1 and (not l2 or l1.val <= l2.val):
                temp.next = ListNode(l1.val)
                l1 = l1.next
            else:
                temp.next = ListNode(l2.val)
                l2 = l2.next

            temp = temp.next

        return header.next
