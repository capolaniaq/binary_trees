#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that check if the binary tree is perfect
 * @tree: pointer to root binary tree
 *
 * Return: 1 if is perfect or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 0;
	size_t height_left = 0, height_right = 0;
	size_t leaves_left = 0, leaves_right = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL && tree->right != NULL)
	|| (tree->left == NULL && tree->right == NULL))
	{
		perfect = 1;
	}
	else
	{
		return (perfect);
	}

	if (tree->left != NULL)
	{
		height_left = binary_tree_height_perfect(tree->left);
		leaves_left = binary_tree_leaves_perfect(tree->left);
	}
	if (perfect == 0)
		return (0);
	if (tree->right != NULL)
	{
		height_right = binary_tree_height_perfect(tree->right);
		leaves_right = binary_tree_leaves_perfect(tree->right);
	}
	if ((height_right != height_left) || (leaves_right != leaves_left))
		return (0);

	return (perfect);

}

/**
 * binary_tree_height_perfect - Function that find the heigt to binary tree
 * @tree: pointer to root or node to check
 *
 * Return: size_t to indicated the height
 */

size_t binary_tree_height_perfect(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		height_left = binary_tree_height_perfect(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		height_right = binary_tree_height_perfect(tree->right) + 1;
	}
	if (height_left >= height_right)
		return (height_left);
	else
		return (height_right);

}

/**
 * binary_tree_leaves_perfect - function that count the leaves in a binary tree
 * @tree: pointer to root of the binary tree
 *
 * Return: size_t indicated the number of leaves
 */

size_t binary_tree_leaves_perfect(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
		leaves = binary_tree_leaves_perfect(tree->left) + leaves;
	if (tree->right != NULL)
		leaves = binary_tree_leaves_perfect(tree->right) + leaves;
	if (tree->left == NULL && tree->right == NULL)
		leaves = leaves + 1;
	return (leaves);
}
