#include "binary_trees.h"

/**

traverse_binary_tree_inorder - Performs an in-order traversal of a binary tree.
@tree: A pointer to the root node of the tree to traverse.
@func: A pointer to a function to call for each node.
*/
void traverse_binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
traverse_binary_tree_inorder(tree->left, func);
func(tree->n);
traverse_binary_tree_inorder(tree->right, func);
}
}
