#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the factor, 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left, right;
int b_fact = 0;
if (tree)
{
left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
b_fact = left - right;
return (b_fact);
}
return (0);
}
