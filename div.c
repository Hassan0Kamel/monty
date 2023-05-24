#include "monty.h"

/**
 * f_div - div stack.
 * @head: sthead
 * @counter: lmber
 * Return: nourn
*/

void f_div(stack_t **head, unsigned int counter)
{
	stack_t *n;
	int length = 0, aux;

	n = *head;
	while (n)
	{
		n = n->next;
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
	n = *head;
	if (n->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = n->next->n / n->n;
	n->next->n = aux;
	*head = n->next;
	free(n);
}
