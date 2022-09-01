#include "binary_trees.h"
/**
* binary_tree_inorder - Node print inorder
* @tree: Pointer to the tree to print inorder
* @func: print value
* Return: pritn value inorder
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
