#include "lists.h"

/**
 * listint_len - returns number of elements in linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
    size_t nu = 0;

    while (h)
    {
        nu++;
        h = h->next;
    }

    return (nu);
}
