#include "monty.h"

/**
  *f_sub- sn
  *@head: stad
  *@counter: linber
  *Return: nourn
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int suspicious, nodez;

	aux = *head;
	for (nodez = 0; aux != NULL; nodez++)
		aux = aux->next;
	if (nodez < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	suspicious = aux->next->n - aux->n;
	aux->next->n = suspicious;
	*head = aux->next;
	free(aux);
}
