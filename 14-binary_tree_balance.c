#include "binary_trees.h"

/**
 * calculate_tree_balance - Determines the equilibrium factor of a binary tree.
 * @structure: A pointer to the root node of the tree to calculate the equilibrium factor.
 *
 * Return: If the tree is NULL, return 0. Otherwise, return the equilibrium factor.
 */
int calculate_tree_balance(const binary_tree_t *structure)
{
	if (structure)
		return (calculate_tree_height(structure->left) - calculate_tree_height(structure->right));

	return (0);
}

/**
 * calculate_tree_height - Determines the height of a binary tree.
 * @structure: A pointer to the root node of the tree to calculate the height.
 *
 * Return: If the tree is NULL, the function must return 0. Otherwise, return the height.
 */
size_t calculate_tree_height(const binary_tree_t *structure)
{
	if (structure)
	{
		size_t left_height = 0, right_height = 0;

		left_height = structure->left ? 1 + calculate_tree_height(structure->left) : 1;
		right_height = structure->right ? 1 + calculate_tree_height(structure->right) : 1;
		return ((left_height > right_height) ? left_height : right_height);
	}
	return (0);
}
