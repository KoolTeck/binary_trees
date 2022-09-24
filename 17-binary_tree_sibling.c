#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the node to find its sibling
 *
 * Return: a pointer to thw sibling or null if error
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || !node->parent)
return (NULL);
if (node  == node->parent->left && node->parent->right)
{
return (node->parent->right);
}
if (node  == node->parent->right && node->parent->left)
{
return (node->parent->left);
}
return (NULL);
}
