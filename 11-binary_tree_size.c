#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, return (0)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int n = 1;

	if (!(tree))
		return (0);

	n += binary_tree_size(tree->left);
	n += binary_tree_size(tree->right);
	return (n);
}
