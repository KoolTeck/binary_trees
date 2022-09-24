#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the node to find its uncle
 *
 * Return: a pointer to thw uncke or null if error
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL)
return (NULL);
if (node  == node->parent->left && node->parent->parent)
{
if (node->parent->parent->left)
{
return (node->parent->parent->left);
}
}
if (node  == node->parent->right && node->parent->parent)
{
if (node->parent->parent->right)
{
return (node->parent->parent->right);
}
}
return (NULL);
}
