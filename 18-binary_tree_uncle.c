#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that check if the node has a uncle
 * @node: pointer to the node to check
 *
 * Return: pointer to uncle node in case success
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != NULL &&
	node->parent->n != node->parent->parent->left->n)
	{
		uncle = node->parent->parent->left;
		return (uncle);
	}
	if (node->parent->parent->right != NULL &&
	node->parent->n != node->parent->parent->right->n)
	{
		uncle = node->parent->parent->right;
		return (uncle);
	}
	return (NULL);
}
