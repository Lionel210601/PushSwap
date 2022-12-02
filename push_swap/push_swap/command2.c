#include "push_swap.h"

int	reverse_rotate2(t_List *a, t_List *b)
{
	reverse_rotate(a, 0);
	reverse_rotate(b, 0);
	ft_printf("rrr\n");
	return (1);
}

int	rotate2(t_List *a, t_List *b)
{
	rotate(a, 0);
	rotate(b, 0);
	ft_printf("rr\n");
	return (1);
}

int	swap_stacks(t_List *a, t_List *b)
{
	swap(a, 0);
	swap(b, 0);
	ft_printf("ss\n");
	return (1);
}
