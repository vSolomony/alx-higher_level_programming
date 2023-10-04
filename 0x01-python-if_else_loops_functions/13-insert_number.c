#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to pointer to head of the list
 * @number: number to insert
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node1, *curr;

    new_node1 = malloc(sizeof(listint_t));
    if (new_node1 == NULL)
        return (NULL);

    new_node1->n = number;
    new_node1->next = NULL;

    curr = *head;

    if (curr == NULL || curr->n >= number)
    {
        new_node1->next = curr;
        *head = new_node1;
        return (new_node1);
    }

    while (curr->next != NULL && curr->next->n < number)
        curr = curr->next;

    new_node1->next = curr->next;
    curr->next = new_node1;

    return (new_node1);
}
