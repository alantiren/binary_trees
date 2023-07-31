#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 *
 * Description: This function deletes the entire binary tree rooted at 'tree'
 *              by recursively freeing all the nodes in the tree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;

binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

free(tree);
}
