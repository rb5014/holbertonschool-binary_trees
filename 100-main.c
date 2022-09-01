#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);

    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);
    root->left->left->left = binary_tree_node(root->left, 32);
    root->left->right->right = binary_tree_node(root->left, 48);

    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);
    root->right->right->right = binary_tree_node(root->right, 412);
    root->left->left->left = binary_tree_node(root->right, 615);

    binary_tree_print(root);
}