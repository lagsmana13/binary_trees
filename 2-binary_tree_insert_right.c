#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 *                            in a binary tree.
 * @parent: A pointer to the parent node.
 * @value: The value to be stored in the new node.
 *
 * Return: If `parent` is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: This function inserts a new node as the right child of the specified
 *              `parent` node in the binary tree. If the `parent` already has a right
 *              child, the new node takes its place, and the old right child becomes
 *              the right child of the newly inserted node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    parent->right = new_node;

    return (new_node);
}
