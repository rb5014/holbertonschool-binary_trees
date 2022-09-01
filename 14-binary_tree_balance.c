#include "binary_trees.h"
/**
* binary_tree_nodes - Node's count
* @tree: Pointer to the tree 
* Return: count of node
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int b_right = 0, b_left = 0;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);

	if (tree->left)
		b_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		b_right = 1 + binary_tree_height(tree->right);

	return (b_left - b_right);
}
