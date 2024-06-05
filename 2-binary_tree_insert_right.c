#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts a node into the left child of parent
 * @parent: parent of the new node
 * @value: value to insert into the node
 * Return: pointer to the newly inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	bst_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(bst_t));
	if (new_node == NULL)
		return (NULL);
	if (value >= INT_MAX)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
