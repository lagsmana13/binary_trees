#include "binary_trees.h"

/**
 * insert_left_binary_tree_node - Inserts a node as the left child of another node in a binary tree.
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs, returns NULL.
 *         Otherwise, returns a pointer to the new node.
 *
 * Description: If the parent already has a left child, the new node takes its place and the old left child is set as
 *              the left child of the new node.
 */
binary_tree_t *insert_left_binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = create_binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }
    parent->left = new_node;

    return (new_node);
}
