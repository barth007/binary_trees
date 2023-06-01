#include "binary_trees.h"
/**
 * binary_tree_insert_right -inserts a node as the right-child of another node
 * @parent: parent of a sub tree
 * @value: data to be added
 * Return: A pointer to a new node
**/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent)
	{
		newNode = malloc(sizeof(binary_tree_t));
		newNode = binary_tree_node(parent, value);
		if (newNode == NULL)
			return (NULL);
		else if (parent->right != NULL)
		{
			newNode->right = parent->right;
			parent->right->parent = newNode;
		}
		parent->right = newNode;
		return (newNode);
	}
	else
		return (NULL);
}
