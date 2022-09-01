#include "binary_trees.h"
/**
* binary_tree_delete - Node delete
* @tree: Pointer to the tree to delete
* Return: no return void function
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
