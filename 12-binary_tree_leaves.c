#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the
 * tree to count the number of leaves
 * Return: number of leaves
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	leaves = 0;
	if (tree)
	{
		if (tree->right && tree->left)
			return (leaves = 2);
		else if (tree->right == NULL && tree->left)
			return (leaves = 1);
		else
			return (leaves = 1);
	}
	return (0);
}
