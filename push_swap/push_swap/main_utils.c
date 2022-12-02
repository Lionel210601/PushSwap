#include "push_swap.h"

void	write_error(void)
{
	char	*str;
	int		i;

	str = "Error\n";
	i = -1;
	while (str[++i] != '\0')
		write(2, &str[i], 1);
}

t_bool	opti_rotation(t_List stack, int lenght, int value)
{
	if (value_position(stack, value) <= (lenght / 2) + 1)
		return (true);
	else
		return (false);
}

t_bool	is_sorted(t_List stack, int code)
{
	int	value;

	value = stack->value;
	if (code == '<')
	{
		while (stack->next != NULL)
		{
			stack = stack->next;
			if (value > stack->value)
				return (false);
			value = stack->value;
		}
	}
	if (code == '>')
	{
		while (stack->next != NULL)
		{
			stack = stack->next;
			if (value < stack->value)
				return (false);
			value = stack->value;
		}
	}
	return (true);
}
