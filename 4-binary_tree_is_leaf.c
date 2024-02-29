#include "binary_trees.h"

/**
 * check_if_leaf_node - Verifies whether a node is a leaf of a binary tree.
 * @node: A pointer to the node to verify.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */
int check_if_leaf_node(const binary_tree_t *node)
{
    if (node == NULL || node->left != NULL || node->right != NULL)
        return (0);

    return (1);
}
