#include "push_swap.h"

t_bool	is_max_value(t_List stack)
{
	int	value;

	value = stack->value;
	while (stack->next != NULL)
	{
		if (stack->value > value)
			return (false);
		stack = stack->next;
	}
	if (stack->value > value)
		return (false);
	return (true);
}

t_bool	is_min_value(t_List stack)
{
	int	value;

	value = stack->value;
	while (stack->next != NULL)
	{
		if (stack->value < value)
			return (false);
		stack = stack->next;
	}
	if (stack->value < value)
		return (false);
	return (true);
}

int	search_min_value(t_List stack)
{
	ListElement	*temp;
	int			min;

	temp = stack;
	min = stack->value;
	while (temp->next != NULL)
	{
		if (min > temp->value)
			min = temp->value;
		temp = temp->next;
	}
	if (min > temp->value)
		min = temp->value;
	return (min);
}

int	search_max_value(t_List stack)
{
	ListElement	*temp;
	int			max;

	temp = stack;
	max = stack->value;
	while (temp->next != NULL)
	{
		if (max < temp->value)
			max = temp->value;
		temp = temp->next;
	}
	if (max < temp->value)
		max = temp->value;
	return (max);
}

int	value_position(t_List stack, int x)
{
	ListElement	*temp;
	int			i;

	temp = stack;
	i = 1;
	while (temp->next != NULL)
	{
		if (x == temp->value)
			break ;
		i++;
		temp = temp->next;
	}
	return (i);
}
