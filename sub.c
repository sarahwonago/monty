#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *a;
	int s, nodes;

	a = *head;
	for (nodes = 0; a != NULL; nodes++)
		a = a->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	s = a->next->n - a->n;
	a->next->n = s;
	*head = a->next;
	free(a);
}
