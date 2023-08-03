#include "binary_trees.h"

/**
 * bst_insert - Insert a value in a Binary Search Tree.
 * @tree: A double pointer to the root node of the BST.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *new_node, *current;
if (tree == NULL)
{
return (NULL);
}
current = *tree;
while (current != NULL)
{
if (value == current->n)
{
return (NULL);
}
if (value < current->n)
{
if (current->left == NULL)
{
new_node = binary_tree_node(current, value);
if (new_node == NULL)
{
return (NULL);
}
current->left = new_node;
return (new_node);
}
current = current->left;
}
else
{
if (current->right == NULL)
{
new_node = binary_tree_node(current, value);
if (new_node == NULL)
{
return (NULL);
}
current->right = new_node;
return (new_node);
}
current = current->right;
}
}
new_node = binary_tree_node(NULL, value);
if (new_node == NULL)
{
return (NULL);
}
*tree = new_node;
return (new_node);
}
