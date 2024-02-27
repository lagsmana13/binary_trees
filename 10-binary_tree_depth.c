#include "binary_trees.h"

/**

measure_binary_tree_depth - Measures the depth of a node in a binary tree.
@tree: A pointer to the node to measure the depth.
Return: If tree is NULL, the function returns 0.
Copy
    Otherwise, it returns the depth of the node.
*/
size_t measure_binary_tree_depth(const binary_tree_t *tree)
{
return ((tree && tree->parent) ? 1 + measure_binary_tree_depth(tree->parent) : 0);
}
