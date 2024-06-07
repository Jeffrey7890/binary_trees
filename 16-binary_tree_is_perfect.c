#include "binary_trees.h"


/**
 * find_a_depth - finds a depth
 * @tree: root node
 * Return: depth
 */
int find_a_depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}


/**
 * _isperfect - check if perfect tree
 * @tree: root node
 * @d: depth of left node
 * @level: level of the node
 * Return: boolian number
 */
int _isperfect(const binary_tree_t *tree, int d, int level)
{
	int l, r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	l = _isperfect(tree->left, d, level + 1);
	r = _isperfect(tree->right, d, level + 1);
	return (l && r);
}

/**
 * binary_tree_is_perfect - wrapper function
 * @tree: root note
 * Return: boolean number
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = find_a_depth(tree);

	return (_isperfect(tree, d, 0));
}
