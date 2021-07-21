#include "binary_trees.h"

/**
 * binary_tree_height - Function that find the heigt to binary tree
 * @tree: pointer to root or node to check
 *
 * Return: size_t to indicated the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		height_left = binary_tree_height(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		height_right = binary_tree_height(tree->right) + 1;
	}
	if (height_left >= height_right)
		return (height_left);
	else
		return (height_right);

}
