#include "binary_trees.h"

/**
 * binary_tree_postorder - Funtion that print the binary tree
 * in post order traversal
 * @tree: pointer to root from binary tree
 * @func: pointer to function for print
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || (*func) == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_postorder(tree->left, (*func));

	if (tree->right != NULL)
		binary_tree_postorder(tree->right, (*func));

	(*func)(tree->n);
}
