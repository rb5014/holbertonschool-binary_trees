#include "binary_trees.h"

/**
 * binary_tree_insert_right - Node creation
 *
 * @parent: Pointer to the parent node
 * @value: Value of created node
 * Return: Created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	node->right = parent->right;

	if (node->right)
		node->right->parent = node;

	parent->right = node;

	return (node);
}
