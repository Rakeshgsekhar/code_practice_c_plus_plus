# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head):
        """
        Do not return anything, modify head in-place instead.
        """
        temp = head
        val = []
        while temp != None:
            val.append(temp.val)
            temp = temp.next

        temp = head
        i = 0
        while len(val) > 0:
            if i%2 == 0:
                temp.val = val[0]
                val.pop(0)
            else:
                temp.val = val[-1]
                val.pop()
            i = i+1
            temp = temp.next

        return head
            
        
