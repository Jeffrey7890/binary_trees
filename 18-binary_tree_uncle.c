#include "binary_trees.h"

/**
 * binary_tree_uncle - gets the uncle of a node
 * @node: node to get uncle of
 * Return: pointer to tuncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent, *parent;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grand_parent = node->parent->parent;

	if (grand_parent->left == parent && grand_parent->right != NULL)
		return (grand_parent->right);
	if (grand_parent->right == parent && grand_parent->left != NULL)
		return (grand_parent->left);

	return (NULL);
}
