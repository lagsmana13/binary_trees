#include "binary_trees.h"

/**

delete_binary_tree - Deletes a binary tree.
@tree: A pointer to the root node of the tree to delete.
*/
void delete_binary_tree(binary_tree_t *tree)
{
if (tree != NULL)
{
delete_binary_tree(tree->left);
delete_binary_tree(tree->right);
free(tree);
}
}
