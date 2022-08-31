#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, return (0)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int n = 0, m = 0;

	if (!(tree))
		return (0);

	if (tree->left)
	{
		n += binary_tree_height(tree->left);
		n++;
	}
	if (tree->right)
	{
		m += binary_tree_height(tree->right);
		m++;
	}
	if (n > m)
		return (n);
	else
		return (m);
}
