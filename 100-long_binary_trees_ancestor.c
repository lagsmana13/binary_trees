#include "binary_trees.h"

size_t measure_depth(const binary_tree_t *tree);

/**

binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
@first: A pointer to the first node.
@second: A pointer to the second node.
Return: If no common ancestors, the function returns NULL.
Copy
    Otherwise, it returns a pointer to the common ancestor.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
size_t first_depth, second_depth;

livecodeserver
Copy
if (first == NULL || second == NULL)
    return (NULL);
if (first == second)
    return ((binary_tree_t *)first);
if (first->parent == second->parent)
    return ((binary_tree_t *)first->parent);
if (first == second->parent)
    return ((binary_tree_t *)first);
if (first->parent == second)
    return ((binary_tree_t *)second);

for (first_depth = measure_depth(first); first_depth > 1; first_depth--)
    first = first->parent;
for (second_depth = measure_depth(second); second_depth > 1; second_depth--)
    second = second->parent;

if (first == second)
    return ((binary_tree_t *)first);
if (first->parent == second->parent)
    return ((binary_tree_t *)first->parent);
if (first == second->parent)
    return ((binary_tree_t *)first);
if (first->parent == second)
    return ((binary_tree_t *)second);
else
    return (NULL);
