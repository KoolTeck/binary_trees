#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the node to find its uncle
 *
 * Return: a pointer to thw uncke or null if error
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || !node->parent || !node->parent->parent)
return (NULL);
if (node->parent  == node->parent->parent->left)
return (node->parent->parent->right);
return (node->parent->parent->left);
}
