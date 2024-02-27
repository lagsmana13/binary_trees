#include "binary_trees.h"

/**

measure_binary_tree_balance - Measures the balance factor of a binary tree.
@tree: A pointer to the root node of the tree to measure the balance factor.
Return: If tree is NULL, the function returns 0.
Copy
    Otherwise, it returns the balance factor.
*/
int measure_binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
return (measure_binary_tree_height(tree->left) - measure_binary_tree_height(tree->right));

Copy
return (0);
}

/**

measure_binary_tree_height - Measures the height of a binary tree.
@tree: A pointer to the root node of the tree to measure the height.
Return: If tree is NULL, the function returns 0.
Copy
    Otherwise, it returns the height of the tree.
*/
size_t measure_binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t left_height = 0, right_height = 0;

xl
Copy
    left_height = tree->left ? 1 + measure_binary_tree_height(tree->left) : 1;
    right_height = tree->right ? 1 + measure_binary_tree_height(tree->right) : 1;
    return ((left_height > right_height) ? left_height : right_height);
}

return (0);
}
