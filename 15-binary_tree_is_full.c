#include "binary_trees.h"

/**
 * binary_tree_is_full - function that find if the node is full
 * @tree: pointer to node check
 *
 * Return: int 1 in case success and 0 in case failure
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL && tree->right != NULL)
	|| (tree->left == NULL && tree->right == NULL))
	{
		full = 1;
	}
	else
	{
		return (full);
	}

	if (tree->left != NULL)
		full = binary_tree_is_full(tree->left);
	if (full == 0)
		return (0);
	if (tree->right != NULL)
		full = binary_tree_is_full(tree->right);
	return (full);
}
