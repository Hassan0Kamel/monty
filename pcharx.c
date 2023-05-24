#include "monty.h"

/**
 * f_pchar - prints the
 * @head: stead
 * @counter: liber
 * Return: norn
*/

void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *m;

	m = *head;
	if (!m)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (m->n > 127 || m->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", m->n);
}
