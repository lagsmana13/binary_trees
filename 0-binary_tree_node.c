#include "binary_trees.h"

/**
 * create_binary_tree_node - Creates a new binary tree node.
 * @parent: A pointer to the parent node.
 * @value: The value to be stored in the new node.
 *
 * Return: If memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the newly created node.
 */
binary_tree_t *create_binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    // Assign the value to the new node
    new_node->n = value;

    // Set the parent of the new node
    new_node->parent = parent;

    // Set the left and right children of the new node as NULL
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}
