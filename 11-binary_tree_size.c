#include "binary_trees.h"

/**
 * binary_tree_size - gets the size of tree
 * @tree: node to get size from
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size, l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	tree_size = l + r + 1;

	return (tree_size);
}
