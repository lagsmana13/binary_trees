#include "binary_trees.h"

/**

binary_trees_ancestor - Determines the lowest common ancestor of two nodes.
@first: Pointer to the first node.
@second: Pointer to the second node.
Return: If no common ancestor exists, the function returns NULL.
Copy
    Otherwise, it returns a pointer to the common ancestor.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
binary_tree_t *mom, *pop;

maxima
Copy
if (!first || !second)
    return (NULL);
if (first == second)
    return ((binary_tree_t *)first);

mom = first->parent, pop = second->parent;
if (first == pop || !mom || (!mom->parent && pop))
    return (binary_trees_ancestor(first, pop));
else if (mom == second || !pop || (!pop->parent && mom))
    return (binary_trees_ancestor(mom, second));
return (binary_trees_ancestor(mom, pop));
}
