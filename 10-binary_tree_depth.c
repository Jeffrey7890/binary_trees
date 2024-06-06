#include "binary_trees.h"


/**
 * _depth - calculate depth of a node
 * @tree: node to calc the depth
 * Return: depth of node
 */
size_t _depth(const binary_tree_t *tree)
{
	int n;

	if (tree == NULL)
		return (0);

	n = _depth(tree->parent);
	return (n + 1);
}

/**
 * binary_tree_depth - wrapper function for _depth()
 * @tree: node to calc the depth
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (_depth(tree) - 1);
}
