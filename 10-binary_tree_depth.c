#include "binary_trees.h"
/**
 * binary_tree_depth - It measures the size of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the size
 * Return: depth of the tree.
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{	size_t depth;

	depth = 0;
	if (tree && tree->parent)
	{
		depth = 1 + binary_tree_depth(tree->parent);
		return (depth);
	}
	return (0);
}
