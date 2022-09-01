#include "binary_trees.h"
/**
* binary_tree_inorder - Node print inorder
* @tree: Pointer to the tree to print inorder
* @func: print value
* Return: pritn value inorder
*/
size_t binary_tree_height(const binary_tree_t *tree)
{	
	int n_left, n_right;

	if (!tree || (!tree->right && !tree->left))
		return (0);
	n_left = 1 + binary_tree_height(tree->left);
	n_right = 1 + binary_tree_height(tree->right);
	return (n_left > n_right ? n_left : n_right);
}
