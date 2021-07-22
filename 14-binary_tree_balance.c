#include "binary_trees.h"

/**
 * binary_tree_balance - Function that find the balance factor
 * to binary tree
 * @tree: pointer to root node
 *
 * Return: integer that is a balace factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_left = 0;
	int balance_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		balance_left = binary_tree_height_balance(tree->left) + 1;
	if (tree->right != NULL)
		balance_right = binary_tree_height_balance(tree->right) + 1;
	return (balance_left - balance_right);
}

/**
 * binary_tree_height_balance - Function that find the heigt to binary tree
 * @tree: pointer to root or node to check
 *
 * Return: size_t to indicated the height
 */

size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		height_left = binary_tree_height_balance(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		height_right = binary_tree_height_balance(tree->right) + 1;
	}
	if (height_left >= height_right)
		return (height_left);
	else
		return (height_right);

}
