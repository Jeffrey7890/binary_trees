#include "binary_trees.h"


/**
 * binary_tree_leaves - counts the number of leaves
 * @tree: root of the treer
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lcnt, rcnt;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	else
	{
		lcnt = binary_tree_leaves(tree->left);
		rcnt = binary_tree_leaves(tree->right);

		return (lcnt + rcnt);
	}
}
