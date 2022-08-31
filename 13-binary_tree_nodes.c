#include "binary_trees.h"

/**
 * binary_tree_nodes -  nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nb of nodes
 * Return: If tree is NULL, return (0)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int n = 0;

	if (!(tree))
		return (0);
	n += binary_tree_nodes(tree->left);
	n += binary_tree_nodes(tree->right);

	if (tree->right || tree->left)
		n++;
	return (n);
}
