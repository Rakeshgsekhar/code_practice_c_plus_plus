class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def __init__(self):
        self.paths = {0:1}

    def sumOfPath(self,node,sumTotal,sum):
        if not node:
            return 0
        
        count = sumTotal + node.val
        self.paths.setdefault(count,0)
        self.paths[count]+=1
        left = self.sumOfPath(node.left,sumTotal,sum)
        right = self.sumOfpath(node.right,sumTotal,sum)
        selfpaths[count]-=1

        return self.paths.get(count - sum,0) + left + right

    def pathSum(self, root: TreeNode, sum: int) -> int:
       
        return sumOfpath(root,0,sum)

        #return paths.get(count - sum,0) + left + right
