#include "monty.h"

/**
 * f_pop - pr top
 * @head: sad
 * @counter: liber
 * Return: norn
*/

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *m;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	*head = m->next;
	free(m);
}
