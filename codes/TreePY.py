class Node:
    def __init__(self,val=0,left=None,right=None):
        self.val = val
        self.left = left
        self.right = right

def inOrder(root):
    if root:
        inOrder(root.left)
        print(str(root.val) + "->",end='')
        inOrder(root.right)
    
def postOrder(root):
    if root:
        postOrder(root.left)
        postOrder(root.right)
        print(str(root.val) + "->",end='')

def preOrder(root):
    if root:
        print(str(root.val) + "->",end='')
        preOrder(root.left)
        preOrder(root.right)

def height(root):
    if root is None:
        return 0
    if root.left is None and root.right is None:
        return 1
    return (max(height(root.left),height(root.right)) + 1)
    
root = Node(1,Node(2,Node(4),Node(5)),Node(3))


print("\n\nINORDER ORDER")
inOrder(root)
print("\n\nPOST ORDER")
postOrder(root)
print("\n\nPRE ORDER")
preOrder(root)
print()
print()
print("Height")
print(height(root))
