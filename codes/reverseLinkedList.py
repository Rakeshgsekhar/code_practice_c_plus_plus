class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def reverse(self, l1):
        if not l1:
            return
        print(l1.val)
        reverse(l1.next)
        
            

l1 = ListNode(1,ListNode(2,ListNode(3,ListNode(4))))
