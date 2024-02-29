#include "binary_trees.h"

/**
 * traverse_binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree_structure: A pointer to the root node of the tree to traverse.
 * @action_func: A pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
}
