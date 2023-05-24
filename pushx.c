#include "monty.h"

/**
 * f_push - add n stack
 * @head: stead
 * @counter: limber
 * Return: non
*/

void f_push(stack_t **head, unsigned int counter)
{
	int s, l = 0, flagging = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			l++;
		for (; bus.arg[l] != '\0'; l++)
		{
			if (bus.arg[l] > 57 || bus.arg[l] < 48)
				flagging = 1; }
		if (flagging == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	s = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, s);
	else
		addqueue(head, s);
}
