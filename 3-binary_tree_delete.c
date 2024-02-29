#include "binary_trees.h"

/**
 * eliminate_binary_tree - Eradicates a binary tree.
 * @structure: A pointer to the root node of the tree to eradicate.
 */
void eliminate_binary_tree(binary_tree_t *structure)
{
    if (structure != NULL)
    {
        eliminate_binary_tree(structure->left);
        eliminate_binary_tree(structure->right);
        free(structure);
    }
}
