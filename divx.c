#include "monty.h"

/**
 * f_div - div stack.
 * @head: sthead
 * @counter: lmber
 * Return: nourn
*/

void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	if (m->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = m->next->n / m->n;
	m->next->m = aux;
	*head = m->next;
	free(m);
}
