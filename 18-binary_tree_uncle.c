#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node in a binary tree.
 * @node: node to find uncle of ( might be different from.
 * Return: The uncle node of the node.
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
