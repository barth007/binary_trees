#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the size
 * Return: size of the tree
**/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;

	left_size = 0;
	right_size = 0;
	if (tree)
	{
		left_size = 1 + binary_tree_size(tree->left);
		right_size = 1 + binary_tree_size(tree->right);
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else if (tree->left == NULL)
			return (right_size);
		else if (tree->right == NULL)
			return (left_size + 1);
		else
			return (left_size + right_size - 1);
	}
	else
		return (0);
}
