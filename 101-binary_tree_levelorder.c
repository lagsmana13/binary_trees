#include "binary_trees.h"

levelorder_queue_t *create_node(binary_tree_t *node);
void free_queue(levelorder_queue_t *head);
void pint_push(binary_tree_t *node, levelorder_queue_t *head,
levelorder_queue_t **tail, void (*func)(int));
void pop(levelorder_queue_t **head);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/**

create_node - Creates a new node for the level-order queue.
@node: The binary tree node to store in the new node.
Returns: If an error occurs, returns NULL.
Copy
     Otherwise, returns a pointer to the new node.
*/
levelorder_queue_t *create_node(binary_tree_t *node)
{
levelorder_queue_t *new_node;

ini
Copy
new_node = malloc(sizeof(levelorder_queue_t));
if (new_node == NULL)
    return (NULL);

new_node->node = node;
new_node->next = NULL;

return (new_node);
}

/**

free_queue - Frees the memory allocated for the level-order queue.

@head: A pointer to the head of the queue.
*/
void free_queue(levelorder_queue_t *head)
{
levelorder_queue_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}
}

/**

pint_push - Executes a function on a given binary tree node and

Copy
        pushes its children into a levelorder_queue_t queue.
@node: The binary tree node to process and push.

@head: A double pointer to the head of the queue.

@tail: A double pointer to the tail of the queue.

@func: A pointer to the function to call on @node.

Description: Exits with a status code of 1 upon malloc failure.
*/
void pint_push(binary_tree_t *node, levelorder_queue_t *head,
levelorder_queue_t **tail, void (*func)(int))
{
levelorder_queue_t *new_node;

func(node->n);
if (node->left != NULL)
{
new_node = create_node(node->left);
if (new_node == NULL)
{
free_queue(head);
exit(1);
}
(*tail)->next = new_node;
*tail = new_node;
}
if (node->right != NULL)
{
new_node = create_node(node->right);
if (new_node == NULL)
{
free_queue(head);
exit(1);
}
(*tail)->next = new_node;
*tail = new_node;
}
}

/**

pop - Removes the head of a levelorder_queue_t queue.

@head: A double pointer to the head of the queue.
*/
void pop(levelorder_queue_t **head)
{
levelorder_queue_t *tmp;

tmp = (*head)->next;
free(*head);
*head = tmp;
}

/**

binary_tree_levelorder - Traverses a binary tree using

Copy
                     level-order traversal.
@tree: A pointer to the root node of the tree to traverse.

@func: A pointer to a function to call for each node.
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
levelorder_queue_t *head, *tail;

if (tree == NULL || func == NULL)
return;

head = tail = create_node((binary_tree_t *)tree);
if (head == NULL)
return;

while (head != NULL)
{
pint_push(head->node, head, &tail, func);
pop(&head);
}
}
