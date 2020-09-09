class Solution:
    def verticalTraversal(self, root: TreeNode) -> List[List[int]]:
        verticalOrder = collections.defaultdict(list)
        def dfs(node,xaxis,yaxis):
            verticalOrder[xaxis].append((yaxis,node.val))
            if(node.left): dfs(node.left,xaxis-1,yaxis+1)
            if(node.right): dfs(node.right,xaxis+1,yaxis+1)
                
        dfs(root,0,0)
        return [[t[1] for t in sorted(verticalOrder[x])] for x in sorted(verticalOrder)]