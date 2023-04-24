#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of linked list
 * @head: pointer to first node in the list
 * @n: data insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *ne;

    ne = malloc(sizeof(listint_t));
    if (!ne)
        return (NULL);

    ne->n = n;
    ne->next = *head;
    *head = ne;

    return (ne);
}
