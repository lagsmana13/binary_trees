#include "binary_trees.h"

/**
 * traverse_binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @structure: A pointer to the root node of the tree to traverse.
 * @action: A pointer to a function to invoke for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
