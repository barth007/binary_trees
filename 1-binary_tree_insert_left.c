#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent of the sub-tree
 * @value: The data
 * Return: A pointer to the new node
**/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent)
	{
		newNode = binary_tree_node(parent, value);
		if (!newNode)
			return (NULL);
		else if (parent->left)
		{
			newNode->left = parent->left;
			parent->left->parent = newNode;
		}
		parent->left = newNode;
		return (newNode);
	}
	else
		return (NULL);
}
