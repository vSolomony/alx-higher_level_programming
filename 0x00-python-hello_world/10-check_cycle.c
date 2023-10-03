#include "lists.h"
/**
 * check_cycle - to check for cycle
 * @list: structure singly linked list
 * Return: 0 if there is no cycle, 1 if there is a cycle
*/
int check_cycle(listint_t *list)
{
	listint_t *turtle, *rabbit;

	if (list == NULL || list->next == NULL)
	{
		return (0);
	}

	turtle = list;
	rabbit = list;

	while (rabbit != NULL && rabbit->next != NULL)
	{
		turtle = turtle->next;
		rabbit = rabbit->next->next;

		if (turtle == rabbit)
		{
			return (1);
		}
	}

	return (0);
}
