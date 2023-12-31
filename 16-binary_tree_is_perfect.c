#include <stdlib.h>
#include "binary_trees.h"

/**
 * tree_is_perfect - function that says if a tree is perfect or not
 * it has to be the same quantity of levels in left as right, and also
 * each node has to have 2 nodes or none
 * @tree: tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int tree_is_perfect(const binary_tree_t *tree)
{
int a = 0, b = 0;

if (tree->left && tree->right)
{
a = 1 + tree_is_perfect(tree->left);
b = 1 + tree_is_perfect(tree->right);
if (b == a && b != 0 && a != 0)
return (b);
return (0);
}
else if (!tree->left && !tree->right)
{
return (1);
}
else
{
return (0);
}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int result = 0;
if (tree == NULL)
{
return (0);
}
else
{
result = tree_is_perfect(tree);
if (result != 0)
{
return (1);
}
return (0);
}
}
