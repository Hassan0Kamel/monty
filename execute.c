#include "monty.h"

/**
* execute - execode
* @stack: head st - stack
* @counter: linnter
* @file: poin file
* @content: linnt
* Return: nourn
*/

int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int s = 0;
	char *opp;

	opp = strtok(content, " \n\t");
	if (opp && opp[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[s].opcode && opp)
	{
		if (strcmp(opp, opst[s].opcode) == 0)
		{	opst[s].f(stack, counter);
			return (0);
		}
		s++;
	}
	if (opp && opst[s].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, opp);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
