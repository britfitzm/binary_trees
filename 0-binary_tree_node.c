#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree node
 * @parent: pointer to the parent of the node to create
 * @value: value to put in new node
 * Return: NULL if an error occurs,
 *	otherwise pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
