#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a node is a root
 * @node: pointer to the node to check
 * Return: 1 if node is a root, 0 otherwise, 0 if node = NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);
	return (1);
}