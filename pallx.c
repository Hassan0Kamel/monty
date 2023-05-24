#include "monty.h"

/**
 * f_pall - pr stack
 * @head: sad
 * @counter: ned
 * Return: nourn
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *x;
	(void)counter;

	x = *head;
	if (x == NULL)
		return;
	while (x)
	{
		printf("%d\n", x->n);
		x = x->next;
	}
}
