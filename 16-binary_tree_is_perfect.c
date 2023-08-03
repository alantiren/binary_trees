#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_height, right_height;
if (tree == NULL)
{
return (0);
}
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (binary_tree_balance(tree) == 0 && left_height == right_height);
}
