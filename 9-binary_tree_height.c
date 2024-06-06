#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * _height - helper function to calulate height
 * @tree: node to count height
 * Return: height from the node
 */
size_t _height(const binary_tree_t *tree)
{
	int n, m;

	if (tree == NULL)
		return (0);


	n = _height(tree->left);
	m = _height(tree->right);

	if (n > m)
		return (n + 1);
	else
		return (m + 1);
}


/**
 * binary_tree_height - calcultate the height of the tree
 * @tree: node to count from
 * Return: height from that node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (_height(tree) - 1);
}
