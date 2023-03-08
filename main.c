/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:08:38 by abertran          #+#    #+#             */
/*   Updated: 2023/03/08 18:24:54 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	Checks if a stack is sorted. 
    Returns 0 if the stack is not sorted, 1 if it is sorted. */

int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

/* Chooses a sorting method depending on the number of values to be sorted. */

//Cuando sea dos y este ordenado? 
//si son 3 pero esta ordeenado? mas de 3 y ordenado?

static void	push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(*stack_a))
		do_sa(stack_a);
	else if (stack_size == 3)
		sort_three(stack_a);
	else if (stack_size > 3 && !is_sorted(*stack_a))
		sort(stack_a, stack_b);
}

void	get_numbers(char *av, t_stack **stack_a)
{
	char		**param;
	long int	n;
	int			i;

	param = ft_split(av, ' ');
	i = 0;
	while (param[i] != '\0')
	{
		if (input_is_correct(param[i]))
		{
			n = ft_atoi(param[i]);
			if (n > INT_MAX || n < INT_MIN)
				error_exit(stack_a, NULL);
			stack_add(stack_a, stack_new(n));
		}
		else
			error_exit(NULL, NULL);
		free(param[i]);
		i++;
	}
	free(param);
}

/* Checks if the input is correct, in which case it initializes stacks a and b,
   assigns each value indexes and sorts the stacks. When sorting is done, frees
   the stacks and exits.
   system("leaks push_swap");  */

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		stack_size;
	int		i;

	i = 1;
	stack_b = NULL;
	stack_a = NULL;
	while (i < ac)
	{
		get_numbers(av[i], &stack_a);
		i++;
	}
	if (is_duplicate(stack_a))
		error_exit(&stack_a, NULL);
	stack_size = get_stack_size(stack_a);
	get_index(stack_a, stack_size + 1);
	push_swap(&stack_a, &stack_b, stack_size);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
