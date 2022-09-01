#include "binary_trees.h"
/**
* binary_tree_is_full- count if is full
* @tree: Pointer to the tree
* Return: count if is full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	return (binary_tree_is_full(tree->left) +
		binary_tree_is_full(tree->right) == 2 ? 1 : 0);
}
