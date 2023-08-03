#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the nodes.
 *
 * Return: Number of nodes with at least 1 child, 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
if (tree->left != NULL || tree->right != NULL)
{
size_t left_nodes = binary_tree_nodes(tree->left);
size_t right_nodes = binary_tree_nodes(tree->right);
return (1 + left_nodes + right_nodes);
}
return (0);
}
