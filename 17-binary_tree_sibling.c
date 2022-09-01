#include "binary_trees.h"


/**
* binary_tree_sibling - Node print inorder
* @node: Pointer to the tree to print inorder
* Return: pritn value inorder
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (node->parent->left == node ?
		node->parent->right : node->parent->left);
}
