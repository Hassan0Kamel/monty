#include "monty.h"

/**
 * f_mul - multiof the stack.
 * @head: stad
 * @counter: lmber
 * Return: urn
*/

void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	aux = m->next->n * m->n;
	m->next->n = aux;
	*head = m->next;
	free(m);
}
