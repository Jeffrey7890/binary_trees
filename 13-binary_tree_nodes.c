#include "binary_trees.h"


/**
 * binary_tree_nodes - count number of non leaf node
 * @tree: root of the tree
 * Return: number of non leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lcnt, rcnt;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	lcnt = binary_tree_nodes(tree->left);
	rcnt = binary_tree_nodes(tree->right);

	return (lcnt + rcnt + 1);

}
