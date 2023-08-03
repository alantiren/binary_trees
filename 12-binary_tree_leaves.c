#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the leaves.
 *
 * Return: Number of leaves in the binary tree, 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaf = 0, a = 0, b = 0;

if (tree == NULL)
{
return (0);
}
else
{
l = binary_tree_leaves(tree->left);
r = binary_tree_leaves(tree->right);
leaf = a + b;
return ((!a && !b) ? leaf + 1 : leaf + 0);
}
}
