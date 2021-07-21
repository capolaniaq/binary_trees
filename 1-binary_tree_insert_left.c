#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that insert a node in left
 * @parent: pointer to root node
 * @value: integer to saved in new node
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;


	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->left = NULL;
		return (new_node);
	}
	tmp = parent->left;
	parent->left = new_node;
	new_node->parent = parent;
	new_node->right = tmp->right;
	new_node->left = tmp;
	tmp->parent = new_node;
	tmp->right = NULL;
	return (new_node);
}
