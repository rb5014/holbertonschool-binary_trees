#include "binary_trees.h"
/**
* binary_tree_is_root - Node is a root
* @node: Pointer to the root node
* Return: 1 if is a root or 0  if null or otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent ? 1 : 0);
}
