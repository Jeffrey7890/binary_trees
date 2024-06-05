#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_node - create new node
 *
 * @parent: parent of the new node
 * @value: value of the new node
 *
 * Return: pointer to the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	bst_t *new_node = malloc(sizeof(bst_t));

	if (new_node == NULL)
		return (NULL);

<<<<<<< HEAD
	if ((long long) value >= INT_MAX)
=======
	if (value >= INT_MAX)
>>>>>>> 9df4236bccdec5ff6c7e3da7b9fe499ad526fa3c
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
