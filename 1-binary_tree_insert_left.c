#include "binary_trees.h"

/**
 * binary_tree_insert_left - Node creation
 *
 * @parent: Pointer to the parent node
 * @value: Value of created node
 * Return: Created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	node->left = parent->left;

	if (node->left)
		node->left->parent = node;

	parent->left = node;

	return (node);
}
