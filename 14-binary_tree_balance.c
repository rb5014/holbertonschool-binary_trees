#include "binary_trees.h"

/**
 * binary_tree_balance - dsdsd
 * @tree: sdsdsd
 * return: un truc pértinent
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
return (0);
}

/**
* @tree: A pointer to the root node of the tree to measure the height.
* Return: return: un truc pértinent
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
