#include "binary_trees.h"


/**
* binary_tree_height - Node print inorder
* @tree: Pointer to the tree to print inorder
* Return: pritn value inorder
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n_left, n_right;

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

	if (!tree || (tree && (!tree->left && !tree->right) ? 1 : 0))
		return (0);

	if (tree->left)
		b_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		b_right = 1 + binary_tree_height(tree->right);

	return (b_left - b_right);
}

/**
* binary_tree_is_full- count if is full
* @tree: Pointer to the tree
* Return: count if is full
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((tree && (!tree->left && !tree->right) ? 1 : 0))
		return (1);

	return (binary_tree_is_full(tree->left) +
		binary_tree_is_full(tree->right) == 2 ? 1 : 0);
}

/**
* binary_tree_nodes - Node's count
* @tree: Pointer to the tree
* Return: count of node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (tree && !tree->left && !tree->right))
	{
		return (0);
	}

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
/**
* binary_tree_is_perfect - Node's count
* @tree: Pointer to the tree
* Return: count of node
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t x = 1, h;

	h = binary_tree_height(tree);
	while (h-- != 0)
	{
		x = x << 1;
	}
	return (!binary_tree_balance(tree) &&
		binary_tree_is_full(tree) &&
		binary_tree_nodes(tree) == x - 1 ? 1 : 0);
}
