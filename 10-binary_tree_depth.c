#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a
 * node in a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, return (0)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int n = 0;

	if (!(tree))
		return (0);

	if (tree->parent)
	{
		n += binary_tree_depth(tree->parent);
		n++;
	}
	return (n);
}
