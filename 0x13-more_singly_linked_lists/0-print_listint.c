#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: linked list type listint_t to print
 *
 * Return: number nodes
 */
size_t print_listint(const listint_t *c)
{
    size_t num = 0;

    while (c)
    {
        printf("%d\n", c->n);
        num++;
        c = c->next;
    }

    return (num);
}
