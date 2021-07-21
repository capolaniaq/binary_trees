#include "binary_trees.h"

/**
 * binary_tree_leaves - function that count the leaves in a binary tree
 * @tree: pointer to root of the binary tree
 *
 * Return: size_t indicated the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
		leaves = binary_tree_leaves(tree->left) + leaves;
	if (tree->right != NULL)
		leaves = binary_tree_leaves(tree->right) + leaves;
	if (tree->left == NULL && tree->right == NULL)
		leaves = leaves + 1;
	return (leaves);
}
