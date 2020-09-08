# Definition for a binary tree node.
class TreeNode:
     def __init__(self, val=0, left=None, right=None):
         self.val = val
         self.left = left
         self.right = right
class Solution:
    def sumRootToLeaf(self, root):
        path = []
        finalResult = 0       
        def allPaths(root,sumVal):
            sumVal = sumVal*2 + root.val
            lef= 0
            right = 0
            if root.left is None and root.right is None:
                return sumVal
            if root.left is None:
                lef = 0
            else:
                lef = allPaths(root.left,sumVal)
            if root.right is None:
                right = 0
            else:
                right = allPaths(root.right,sumVal)

            return lef+right
        finalResult = allPaths(root,0)
        #print(self.finalResult)
        #print(path)
        return finalResult


root = TreeNode(1,TreeNode(0,TreeNode(0,None,None),TreeNode(1,None,None)),TreeNode(1,TreeNode(0,None,None),TreeNode(1,None,None)))

s = Solution()
print(s.sumRootToLeaf(root))
