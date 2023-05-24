#include "monty.h"

/**
  *f_rotr- rotatom
  *@head: stad
  *@counter: liber
  *Return: nurn
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copyer;

	copyer = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copyer->next)
	{
		copyer = copyer->next;
	}
	copyer->next = *head;
	copyer->prev->next = NULL;
	copyer->prev = NULL;
	(*head)->prev = copyer;
	(*head) = copyer;
}
