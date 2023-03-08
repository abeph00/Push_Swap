/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:31:51 by abertran          #+#    #+#             */
/*   Updated: 2023/03/08 20:31:50 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Checks if the given arguments are all numbers, without duplicates. */

long	input_is_correct(char	*str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && (ft_strlen(str) > 1))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicate(t_stack *column)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = column;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->value == tmp2->value)
				return (1);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (0);
}	

/*	Assigns an index to each value in stack a. 
*	The indexes are assigned from highest (stack_size) to lowest (1). */

void	get_index(t_stack *stack_a, int stack_size)
{
	t_stack	*ptr;
	t_stack	*biggest;
	int		value;

	while (--stack_size > 0)
	{
		ptr = stack_a;
		biggest = NULL;
		value = INT_MIN;
		while (ptr)
		{
			if (ptr->value == INT_MIN && ptr->index == 0)
				ptr->index = 1;
			if (ptr->value > value && ptr->index == 0)
			{
				value = ptr->value;
				biggest = ptr;
				ptr = ptr->next;
			}
			else
				ptr = ptr->next;
		}
		if (biggest != NULL)
			biggest->index = stack_size;
	}
}
