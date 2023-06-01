#include "binary_trees.h"
/**
 * binary_tree_is_root -checks if a given node is a root
 * @node: is a pinter to the node to check
 * Return: NULL or 0 or 1 depending on the outcome
**/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	binary_tree_is_root(node->left);
	if (node->parent)
		return (0);
	binary_tree_is_root(node->right);
	if (node->parent)
		return (0);
	return (1);
}
