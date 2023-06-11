#include "binary_trees.h"
/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: pointer to the parent node.
 * @value: value for the new node
 * Return: pointer to the new node on success.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Declare a new node*/
	binary_tree_t *new_node;

	/*allocate memory for the node*/
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
