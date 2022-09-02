#include "binary_trees.h"
/**
 * binary_trees_ancestors - finds the lowest
 * common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: ancestor node pointer, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
const binary_tree_t *tmp = first, *tmp2;

	while (tmp)
	{
		tmp2 = second;
		while (tmp2)
		{
			if (tmp2 == tmp)
				return ((binary_tree_t *) tmp2);
			tmp2 = tmp2->parent;
		}
		tmp = tmp->parent;
	}
	return (NULL);
}
