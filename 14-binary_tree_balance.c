#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the binary tree, 0 if tree is NULL.
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
size_t a = 0;
size_t b = 0;
if (tree == NULL)
{
return (0);
}
else
{
if (tree)
{
a = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
b = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
}
return ((a > b) ? a : b);
}
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance factor of the binary tree, 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int right = 0, left = 0, total = 0;
if (tree)
{
left = ((int)binary_tree_height_b(tree->left));
right = ((int)binary_tree_height_b(tree->right));
total = left - right;
}
return (total);
}
