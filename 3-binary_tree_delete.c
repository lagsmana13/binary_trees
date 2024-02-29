#include "binary_trees.h"

/**
 * eliminate_binary_tree - Eradicates an entire binary tree and releases the allocated memory.
 * @structure: A pointer to the root node of the tree to eliminate.
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
