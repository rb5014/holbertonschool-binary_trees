#include "binary_trees.h"
/**
* binary_tree_is_leaf - Node is a leaf
* @node: Pointer to the node
* Return: 1 if is a leaf or 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && (!node->left && !node->right) ? 1 : 0);
}
