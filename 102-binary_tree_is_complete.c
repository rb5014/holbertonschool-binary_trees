#include "binary_trees.h"

/**
* binary_tree_is_complete - dsdds
* @tree: sdsdd
* Return: dsdsd
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (0);

if ((tree->left) && (tree->right))
return
(binary_tree_is_complete(tree->left) && binary_tree_is_complete(tree->right));
return (1);
}
