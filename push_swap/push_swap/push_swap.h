#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>

typedef struct s_chuncks
{
	int	min;
	int	one;
	int	two;
	int	three;
	int	four;
	int	max;
}	t_chuncks;

typedef enum bool
{
	false,
	true
}	t_bool;

typedef struct ListElement
{
	int					value;
	struct ListElement	*next;
}ListElement,	*t_List;

t_List	new_list(void);
t_bool	is_empty_list(t_List li);
int		list_lenght(t_List li);
void	print_list(t_List li);
t_List	insert_back_list(t_List li, int x);
t_List	insert_front_list(t_List li, int x);
t_List	remove_back_list(t_List li);
t_List	remove_front_list(t_List li);
t_List	clear_list(t_List li);

int		push_swap(t_List *a);
int		ft_strisnot_digit(char *s);
int		sort_int_tab(int *check_doubles, int nbr, int code);
t_List	init_stack(int ac, t_List myList, char **av);
t_List	init_one_arg(char *av, t_List stack);
int		count_len(char **s);
int		error_manager_1(int ac, char **av);
int		error_manager_2(int ac, char **av);
int		swap(t_List *stack, int code);
int		swap_stacks(t_List *a, t_List *b);
int		rotate(t_List *stack, int code);
int		rotate2(t_List *a, t_List *b);
int		reverse_rotate(t_List *stack, int code);
int		reverse_rotate2(t_List *a, t_List *b);
int		push(t_List *take, t_List *send, int code);
t_bool	opti_rotation(t_List stack, int lenght, int value);
t_bool	is_sorted(t_List stack, int code);
t_bool	is_okay(t_List stack);
int		algo_3(t_List *a, int min, int max);
int		algo_5(t_List *a, t_List *b, int len);
int		search_min_value(t_List stack);
int		search_max_value(t_List stack);
int		next_command(t_List *a, t_List *b, int count);
int		get_last_elem(t_List stack);
int		do_chunk(t_List *a, t_List *b, int start, int limit);
t_bool	is_chunk(t_List stack, int limit, int start);
int		swap_control(t_List *a, t_List *b, int count);
int		value_position(t_List stack, int x);
t_bool	is_max_value(t_List stack);
t_bool	is_min_value(t_List stack);
int		*get_chunk(t_List a);
void	write_error(void);
int		sort_chunk(t_List *a, t_List *b);
int		go_to_value(t_List *stack, t_List *stack2, int value, int count);
int		swap_worth(t_List a, t_List b);
int		double_rotate_worth(t_List a, t_List b);
int		double_reverse_rotate_worth(t_List a, t_List b);
int		find_next_nbr2(t_List stack, int start, int limit, int len);
int		ext_error_1(char **tab, int len, int i);
void	free_tab(char **tab);
void	cmd_control(t_List *a, t_List *b);
int		push_next_nbr(t_List *a, t_List *b, int i, int len);

#endif
