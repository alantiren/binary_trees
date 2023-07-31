0x1D. C - Binary trees
C
Group project
Algorithm
Data structure
 By: Alexandre Gautier
 Weight: 5

1. What is a binary tree?
A binary tree is a data structure composed of nodes where each node has at most two children, referred to as the left child and the right child. The topmost node of the tree is called the root, and nodes with no children are known as leaf nodes. Binary trees are hierarchical in nature, with each node potentially having two subtrees below it.

2. What is the difference between a binary tree and a Binary Search Tree (BST)?
The key difference between a binary tree and a Binary Search Tree (BST) lies in their ordering property. In a binary tree, there are no specific rules regarding the arrangement of nodes, and it may not be sorted in any particular order. On the other hand, a Binary Search Tree is a specific type of binary tree in which the left child of a node contains a value less than or equal to the node's value, and the right child contains a value greater than the node's value. This property allows for efficient searching, insertion, and deletion operations in BST.

3. What is the possible gain in terms of time complexity compared to linked lists?
Binary trees offer better time complexity compared to linked lists for certain operations. For example, searching, insertion, and deletion operations in a balanced Binary Search Tree can be performed in O(log n) time, where n is the number of nodes in the tree. In contrast, linked lists have a linear time complexity of O(n) for these operations since they require traversing the list sequentially. However, it's important to note that the time complexity advantage of binary trees is realized when they are balanced. Unbalanced binary trees may have worst-case time complexity similar to linked lists.

4. What are the depth, the height, the size of a binary tree?
- Depth: The depth of a node in a binary tree is the number of edges from the root to that node. The depth of the root node is 0.
- Height: The height of a node in a binary tree is the number of edges on the longest path from that node to a leaf node. The height of an empty tree is -1, and the height of a tree with only one node (the root) is 0.
- Size: The size of a binary tree is the total number of nodes in the tree.

5. What are the different traversal methods to go through a binary tree?
There are mainly three types of binary tree traversals:

- Inorder Traversal: In this traversal, the left subtree is visited first, followed by the root node, and then the right subtree. It gives nodes in non-decreasing order in a Binary Search Tree.
- Preorder Traversal: In this traversal, the root node is visited first, followed by the left subtree, and then the right subtree.
- Postorder Traversal: In this traversal, the left subtree is visited first, then the right subtree, and finally, the root node is visited.

Additionally, there are two more traversal methods that are not as commonly used:
- Level-order Traversal (also known as Breadth-First Traversal): In this traversal, nodes are visited level by level from the root to the leaves.

6. What is a complete, a full, a perfect, a balanced binary tree?
- Complete Binary Tree: A binary tree is called complete if all levels are fully filled except possibly the last level, and the last level is filled from left to right. In a complete binary tree, the last level may have gaps on the right side, but all nodes are as far left as possible.

- Full Binary Tree: A binary tree is called full if every node has either zero or two children. In other words, every internal node has exactly two children.

- Perfect Binary Tree: A binary tree is called perfect if all its levels are fully filled with nodes. A perfect binary tree has 2^h - 1 nodes, where h is the height of the tree.

- Balanced Binary Tree: A binary tree is called balanced if the difference in height between the left and right subtrees of every node is not more than a certain value (often 1). This ensures that the tree remains reasonably balanced, leading to efficient operations.