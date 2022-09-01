#include "binary_trees.h"
/**
* binary_tree_leaves - Node's leaves
* @tree: Pointer to the tree 
* Return: leaves of node
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{	
	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return(1);
	
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
