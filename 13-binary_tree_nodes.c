#include "binary_trees.h"

/**
 * binary_tree_nodes - function that count a nodes of a binary tree
 * @tree: pointer to root of binary tree
 *
 * Return: size_t that is the number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL || tree->left != NULL)
		nodes++;

	if (tree->left != NULL)
		nodes = binary_tree_nodes(tree->left) + nodes;
	if (tree->right != NULL)
		nodes = binary_tree_nodes(tree->right) + nodes;

	return (nodes);
}
