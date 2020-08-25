# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isLeafe(self,node):
        if node is None:
            return False
        if node.left is None and node.rigth is None:
            return True
        return False
    def sumOfLeftLeaves(self, root):
        sumofLeafs = 0
        if root is not None:
            if self.isLeafe(root.left):
                sumofLeafs += root.left
            else:
                sumofLeafs += sumOfLeftLeaves(root.left)

            sumofLeafs += sumOfLeftLeaves(root.right)

        return sumofLeafs
    

s = Solution()
root = TreeNode(3,TreeNode(9),TreeNode(20,TresNode(15),TreeNode(7)))
print(s.sumOfLeftLeaves(root))
