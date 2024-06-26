#include "binary_trees.h"


/**
 * binary_tree_postorder - traverses tree postorder
 * @tree: rote node of the tree
 * @func: function to perform on each node 
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
