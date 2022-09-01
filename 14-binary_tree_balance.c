#include "binary_trees.h"

/**
* binary_tree_is_leaf - Node is a leaf
* @node: Pointer to the node
* Return: 1 if is a leaf or 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && (!node->left && !node->right) ? 1 : 0);
}

/**
* binary_tree_height - Node print inorder
* @tree: Pointer to the tree to print inorder
* Return: pritn value inorder
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int n_left, n_right;

	if (!tree || (!tree->right && !tree->left))
		return (0);
	n_left = 1 + binary_tree_height(tree->left);
	n_right = 1 + binary_tree_height(tree->right);
	return (n_left > n_right ? n_left : n_right);
}

/**
* binary_tree_balance - Node's count
* @tree: Pointer to the tree
* Return: count of node
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int b_right = 0, b_left = 0;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);

	if (tree->left)
		b_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		b_right = 1 + binary_tree_height(tree->right);

	return (b_left - b_right);
}