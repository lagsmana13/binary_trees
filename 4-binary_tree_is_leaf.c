#include "binary_trees.h"

/**

check_if_leaf_node - Checks if a node is a leaf node in a binary tree.
@node: A pointer to the node to check.
Return: If the node is a leaf node, returns 1.
Copy
    Otherwise, returns 0.
*/
int check_if_leaf_node(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
return (0);

Copy
return (1);
}
