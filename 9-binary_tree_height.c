#include "binary_trees.h"
/**
 * binary_tree_height -It measures the height of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the height
 * Return: height of the tree
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	left_height = 0;
	right_height = 0;
	if (tree)
	{
		left_height = 1 + binary_tree_height(tree->left);
		right_height = 1 + binary_tree_height(tree->right);
		if (tree->left == NULL && tree->right ==  NULL)
			return (0);
		if (left_height > right_height)
			return (left_height);
		else
			return (right_height);
	}
	return (0);
}
