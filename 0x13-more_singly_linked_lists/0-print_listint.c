#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
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
