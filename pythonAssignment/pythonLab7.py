# Design a class that accommodates all the Tree traversal types (Inorder, Preorder, Postorder).

class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key
 
 
# inorder tree traversal
def printInorder(root):
 
    if root:
 
        # recur on node's left
        printInorder(root.left)
 
        # print the data of node
        print(root.val),
 
        # recur on node's right
        printInorder(root.right)

# preorder tree traversal
def printPreorder(root):

    if root:

        # print the data of node
        print(root.val),
 
        # recur on node's left
        printPreorder(root.left)
 
        # recur on node's right
        printPreorder(root.right)
 
# postorder tree traversal
def printPostorder(root):
 
    if root:
 
        # recur on node's left
        printPostorder(root.left)
 
        # recur on node's right 
        printPostorder(root.right)
 
        # print the data of node
        print(root.val)
 
 


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

# Function call
print("\nInorder traversal of binary tree is")
printInorder(root)

print("\nPreorder traversal of binary tree is")
printPreorder(root)

print("\nPostorder traversal of binary tree is")
printPostorder(root)
