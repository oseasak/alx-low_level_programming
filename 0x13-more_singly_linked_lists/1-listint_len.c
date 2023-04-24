#include "lists.h"

/**
 * listint_len - returns number of elements in linked lists
 * @h: linked list type listint_t to traverse
 *
 * Return: number nodes
 */
size_t listint_len(const listint_t *c)
{
    size_t num = 0;

    while (c)
    {
        num++;
        c = c->next;
    }

    return (num);
}
