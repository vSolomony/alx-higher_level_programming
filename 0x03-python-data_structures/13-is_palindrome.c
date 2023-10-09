#include "lists.h"
/**
 * is_palindrome - Checks if a singly linked list is a palindrome
 * @head: Pointer to the head of the linked list
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head;
	listint_t *prev = NULL, *current = *head, *next;
	int is_palindrome = 1;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	while (slow != NULL)
	{
		next = slow->next;
		slow->next = prev;
		prev = slow;
		slow = next;
	}

	while (prev != NULL)
	{
		if ((*head)->n != prev->n)
		{
			is_palindrome = 0;
			break;
		}

		*head = (*head)->next;
		prev = prev->next;
	}
	slow = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = slow;
		slow = current;
		current = next;
	}
	*head = slow;
	return (is_palindrome);
}
