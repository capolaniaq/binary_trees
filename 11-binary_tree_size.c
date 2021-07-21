#include "binary_trees.h"

/**
 * binary_tree_size - function that find the size to a node
 * @tree: pointer to node check
 *
 * Return: zise_t that indicated the size of node
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
		size = binary_tree_size(tree->left) + size;

	if (tree->right != NULL)
		size = binary_tree_size(tree->right) + size;

	return (size);
}
