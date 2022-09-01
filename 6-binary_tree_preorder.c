#include "binary_trees.h"
/**
* binary_tree_preorder - Node delete
* @tree: Pointer to the tree to delete
* @func: print value
* Return: no return void function
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);	
}
