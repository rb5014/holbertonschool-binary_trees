#include "binary_trees.h"
/**
* binary_tree_inorder - Node print inorder
* @tree: Pointer to the tree to print inorder
* @func: print value
* Return: pritn value inorder
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);	
}
