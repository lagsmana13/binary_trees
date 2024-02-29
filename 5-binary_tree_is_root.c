#include "binary_trees.h"

/**

check_if_root_node - Checks if a node is the root of a binary tree.
@node: A pointer to the node to check.
Return: If the node is the root, returns 1.
Copy
    Otherwise, returns 0.
*/
int check_if_root_node(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
return (0);


return (1);
}
