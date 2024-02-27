#include "binary_trees.h"

/**

count_binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
@tree: A pointer to the root node of the tree to count the number of nodes.
Return: If tree is NULL, the function must return 0.
Copy
    Otherwise, it returns the count of nodes with at least 1 child.
*/
size_t count_binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;

xl
Copy
if (tree)
{
    nodes += (tree->left || tree->right) ? 1 : 0;
    nodes += count_binary_tree_nodes(tree->left);
    nodes += count_binary_tree_nodes(tree->right);
}
return (nodes);
}
