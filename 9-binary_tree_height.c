#include "binary_trees.h"
/**
 * binary_tree_height -It measures the height of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the height
 * Return: height of the tree
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	if (tree == NULL)
		return (0);
	if (tree->left)
		count = 1 + binary_tree_height(tree->left);
	if (tree->right)
		count = 1 + binary_tree_height(tree->right);
	return (count);
}
