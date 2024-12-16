/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tordner <tordner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:56:27 by tordner           #+#    #+#             */
/*   Updated: 2024/12/16 19:59:20 by tordner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>
# include <string.h>

typedef struct s_stack_node
{
	int					value;
	int					count;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;
}	t_stack_node;

char			**ft_split(char const *s, char c);
int				ft_atol(const char *str);
char			*ft_strdup(char *src);
char			**mimic_av(char **new);

void			init_stack(t_stack_node **a, char **av, bool check_tab);
void			create_node(t_stack_node **stack, int n);
int				len_stack(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *head);
void			assign_count(t_stack_node *a);

int				error_check(int ac, char **av);
int				check_dup(char **av);
int				check_string_arg(char *str);
int				number_check(int ac, char **av);
int				check_int_min_max(int ac, char **av);
void			free_tab(char **new);
void			free_stack(t_stack_node **a);

void			push(t_stack_node **dest, t_stack_node **src);
void			pa(t_stack_node **a, t_stack_node **b, bool check);
void			pb(t_stack_node **b, t_stack_node **a, bool check);

void			swap(t_stack_node **head);
void			sa(t_stack_node **a, bool check);
void			sb(t_stack_node **b, bool check);
void			ss(t_stack_node **a, t_stack_node **b, bool check);

void			rotate(t_stack_node **stack);
void			ra(t_stack_node **a, bool check);
void			rb(t_stack_node **b, bool check);
void			rr(t_stack_node **a, t_stack_node **b, bool check);

void			rev_rotate(t_stack_node **stack);
void			rra(t_stack_node **a, bool check);
void			rrb(t_stack_node **b, bool check);
void			rrr(t_stack_node **a, t_stack_node **b, bool check);

int				is_sorted(t_stack_node *a);
void			sort_two_n(t_stack_node **a);
void			sort_three_n(t_stack_node **a);
void			sort_five_n(t_stack_node **a, t_stack_node **b);

#endif