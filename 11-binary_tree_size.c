#include "binary_trees.h"

/**

measure_binary_tree_size - Measures the size of a binary tree.

@tree: A pointer to the root node of the tree to measure the size of.

Return: The size of the tree.
*/
size_t measure_binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;

if (tree)
{
size += 1;
size += measure_binary_tree_size(tree->left);
size += measure_binary_tree_size(tree->right);
}
return (size);
}
