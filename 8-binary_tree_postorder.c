#include "binary_trees.h"

/**

traverse_binary_tree_postorder - Performs a post-order traversal of a binary tree.
@tree: A pointer to the root node of the tree to traverse.
@func: A pointer to a function to call for each node.
*/
void traverse_binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
traverse_binary_tree_postorder(tree->left, func);
traverse_binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
