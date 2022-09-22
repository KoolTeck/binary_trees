#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the height, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;
if (tree)
{
left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return (left > right ? left : right);
}
return (0);
}