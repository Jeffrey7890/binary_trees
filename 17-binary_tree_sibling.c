#include "binary_trees.h"


/**
 * binary_tree_sibling - gets the siblin of a node
 * @node: node to checck sibline
 * Return: pointer to sibine
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return(NULL);

	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);
	if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);

	return (NULL);
}
