#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: NULL or 1 or 0 base on the outcome
**/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	binary_tree_is_leaf(node->left);
	if (node->left)
		return (0);
	binary_tree_is_leaf(node->right);
	if (node->right)
		return (0);
	return (1);
}
