#include "binary_trees.h"

/**

count_binary_tree_leaves - Counts the leaves in a binary tree.

@tree: A pointer to the root node of the tree to count the leaves of.

Return: The number of leaves in the tree.
*/
size_t count_binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;

if (tree)
{
leaves += (!tree->left && !tree->right) ? 1 : 0;
leaves += count_binary_tree_leaves(tree->left);
leaves += count_binary_tree_leaves(tree->right);
}
return (leaves);
}
