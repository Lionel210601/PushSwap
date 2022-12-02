#include "push_swap.h"

int	swap(t_List *stack, int code)
{
	ListElement	*temp;
	int			i;
	int			j;

	if (is_empty_list(*stack) || list_lenght(*stack) < 2)
		return (0);
	temp = *stack;
	i = temp->value;
	temp = temp->next;
	j = temp->value;
	*stack = remove_front_list(*stack);
	*stack = remove_front_list(*stack);
	*stack = insert_front_list(*stack, i);
	*stack = insert_front_list(*stack, j);
	if (code == 'a')
		ft_printf("sa\n");
	if (code == 'b')
		ft_printf("sb\n");
	return (1);
}

int	push(t_List *take, t_List *send, int code)
{
	ListElement	*value;

	if (is_empty_list(*send))
		return (0);
	value = *send;
	*take = insert_front_list(*take, value->value);
	*send = remove_front_list(*send);
	if (code == 'a')
		ft_printf("pa\n");
	if (code == 'b')
		ft_printf("pb\n");
	return (1);
}

int	rotate(t_List *stack, int code)
//1 2 3 4 -> 2 3 4 1//
{
	ListElement	*temp;

	if (is_empty_list(*stack) || list_lenght(*stack) < 2)
		return (0);
	temp = *stack;
	*stack = insert_back_list(*stack, temp->value);
	*stack = remove_front_list(*stack);
	if (code == 'a')
		ft_printf("ra\n");
	if (code == 'b')
		ft_printf("rb\n");
	return (1);
}

int	reverse_rotate(t_List *stack, int code)
//insert le dernier devant la liste//1 2 3 4 -> 4 1 2 3//
{
	ListElement	*temp;

	if (is_empty_list(*stack) || list_lenght(*stack) < 2)
		return (0);
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	*stack = insert_front_list(*stack, temp->value);
	*stack = remove_back_list(*stack);
	if (code == 'a')
		ft_printf("rra\n");
	if (code == 'b')
		ft_printf("rrb\n");
	return (1);
}
