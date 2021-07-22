#include "binary_trees.h"

/**
 * binary_tree_sibling - function that check the sibling of the node
 * @node: pointer to the node to check
 *
 * Return: pointer to sibling in case success
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL ||
	(node->parent->left == NULL && node->parent->right  == NULL))
		return (NULL);

	if (node->parent->left != NULL && node->n != node->parent->left->n)
	{
		sibling = node->parent->left;
		return (sibling);
	}
	else if (node->parent->right  != NULL && node->n != node->parent->right->n)
	{
		sibling = node->parent->right;
		return (sibling);
	}
	return (NULL);

}
