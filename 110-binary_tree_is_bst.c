#include "binary_trees.h"

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		if (tree->left->n >= tree->n)
			return (0);
		if (!binary_tree_is_bst(tree->left))
			return (0);
	}

	if (tree->right)
	{
		if (tree->right->n <= tree->n)
			return (0);
		if (!binary_tree_is_bst(tree->right))
			return (0);
	}

	return (1);
}
