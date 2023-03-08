/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:01:19 by abertran          #+#    #+#             */
/*   Updated: 2023/02/23 22:49:05 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	Assigns a position to each element of a stack from top to bottom
	in ascending order. Is used to calculate the cost of moving a certain number to
*	a certain position*/

static void	get_position(t_stack **stack)
{
	t_stack		*tmp;
	int			i;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}

/*	Picks the best target position in stack A for the given index of
	an element in stack B. First checks if the index of the B element can
	be placed somewhere in between elements in stack A.
	If not, it finds the element with the smallest index in A and assigns 
	that as the target position. */
	//por que seguimos comprobando los numeros si se supone ya estan ordenados.
		//else if(tmp->index > target_i)
		//	return (target);

static int	get_target(t_stack **stack_a, int index_b, int target_i, int target)
{
	t_stack	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->index > index_b && tmp->index < target_i)
		{
			target_i = tmp->index;
			target = tmp->pos;
		}
		tmp = tmp->next;
	}
	if (target_i != INT_MAX)
		return (target);
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->index < target_i)
		{
			target_i = tmp->index;
			target = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (target);
}

/*	Gets the current position of the element with the lowest index. */

int	position_lowest_index(t_stack **stack)
{
	t_stack	*tmp;
	int		lowest_i;
	int		lowest_p;

	tmp = *stack;
	lowest_i = INT_MAX;
	get_position(stack);
	lowest_p = tmp->pos;
	while (tmp)
	{
		if (tmp->index < lowest_i)
		{
			lowest_i = tmp->index;
			lowest_p = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (lowest_p);
}

/*	Assigns a target position in stack A to each element. The target position
	is the spot the element in B needs to get to in order to be sorted. 
	This position will be used to calculate the cost of moving each element
	to its target position. */

void	get_target_position(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		target;

	tmp = *stack_b;
	get_position(stack_a);
	get_position(stack_b);
	target = 0;
	while (tmp)
	{
		target = get_target(stack_a, tmp->index, INT_MAX, target);
		tmp->target = target;
		tmp = tmp->next;
	}
}
