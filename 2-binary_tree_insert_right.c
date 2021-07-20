#include "binary_trees.h"




binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	if (parent == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
		return (new_node);
	}
	tmp = parent->right;
	parent->right = new_node;
	new_node->parent = parent;
	new_node->left = tmp->left;
	new_node->right = tmp;
	tmp->parent = new_node;
	tmp->left = NULL;
	return (new_node);
}