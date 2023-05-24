#include "monty.h"
/**
 * f_swap - add the stack.
 * @head: sta
 * @counter: lier
 * Return: nn
*/
void f_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	aux = m->n;
	m->n = m->next->n;
	m->next->n = aux;
}
