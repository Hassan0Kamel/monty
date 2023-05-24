#include "monty.h"

/**
 * f_add - addsts of the stack.
 * @head: staad
 * @counter: lineer
 * Return: nn
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *m;
	int length = 0, aux;

	m = *head;
	while (m)
	{
		m = m->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	aux = m->n + m->next->n;
	m->next->n = aux;
	*head = m->next;
	free(m);
}
