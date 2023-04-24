#include "lists.h"

/**
 * print_listint - prints the elements of linked list
 * @h: linked list type listint_t to print
 *
 * Return: number nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t nu = 0;

    while (h)
    {
        printf("%d\n", h->n);
        nu++;
        h = h->next;
    }

    return (nu);
}
