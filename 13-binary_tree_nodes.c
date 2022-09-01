#include "binary_trees.h"
/**
* binary_tree_nodes - Node's count
* @tree: Pointer to the tree 
* Return: count of node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{	
	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
