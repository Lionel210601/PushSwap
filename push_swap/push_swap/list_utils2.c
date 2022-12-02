#include "push_swap.h"

t_List	insert_front_list(t_List li, int x)
{
	ListElement	*element;

	element = malloc(sizeof(*element));
	if (element == NULL)
	{
		free(element);
		return (li);
	}
	element->value = x;
	if (is_empty_list(li))
		element->next = NULL;
	else
		element->next = li;
	return (element);
}

t_List	remove_back_list(t_List li)
{
	ListElement	*temp;
	ListElement	*before;

	if (is_empty_list(li))
		return (new_list());
	if (li->next == NULL)
	{
		free (li);
		li = NULL;
		return (new_list());
	}
	temp = li;
	before = li;
	while (temp->next != NULL)
	{
		before = temp;
		temp = temp->next;
	}
	before->next = NULL;
	free (temp);
	temp = NULL;
	return (li);
}

t_List	remove_front_list(t_List li)
{
	ListElement	*element;

	if (is_empty_list(li))
		return (new_list());
	element = li->next;
	free (li);
	li = NULL;
	return (element);
}

t_List	clear_list(t_List li)
{
	if (is_empty_list(li))
		return (new_list());
	while (li != NULL)
		li = remove_front_list(li);
	li = NULL;
	return (li);
}

int	get_last_elem(t_List stack)
{
	while (stack->next != NULL)
		stack = stack->next;
	return (stack->value);
}
