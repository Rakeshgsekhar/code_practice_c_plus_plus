# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def getAllElements(self, root1, root2):
        result = []
        def inOrder(root):
            if root:
                #result.append(root.val)
                inOrder(root.left)
                result.append(root.val)
                #print(str(root.val) + "->",end='')
                inOrder(root.right)
        inOrder(root1)
        inOrder(root2)
        #print(result)
        return sorted(result)

s = Solution()
root1 = TreeNode(2,TreeNode(1),TreeNode(4))
root2 = TreeNode(1,TreeNode(0),TreeNode(3))

root3 = TreeNode(1,None,TreeNode(8))
root4 = TreeNode(8,TreeNode(1),None)

print(s.getAllElements(root1,root2))
print(s.getAllElements(root3,root4))
        
