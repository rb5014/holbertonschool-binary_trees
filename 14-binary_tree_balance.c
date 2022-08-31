#include "binary_trees.h"


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to count the nb of nodes
 * Return: If tree is NULL, return (0)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int n = 0, m = 0;

	if (!(tree))
		return (0);

	if (tree->left)
	{
		n += binary_tree_balance(tree->left);
		n++;
	}
	if (tree->right)
	{
		m += binary_tree_balance(tree->right);
		m++;
	}
	return (n - m);
}
