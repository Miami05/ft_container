/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:34:24 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/22 19:09:50 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H

# define FT_STACK_H

# include "ft_vector.h"
# include "linked_lists.h"
# include <stdbool.h>

typedef struct s_stack_vec
{
	t_vector	*vec;
}	t_stack_vec;

typedef struct s_stack_vec_2d
{
	t_vector_two_d	*vec_2d;
}	t_stack_vec_2d;

typedef struct s_stack_list
{
	t_list		*list;
}	t_stack_list;

typedef struct s_stack_double_list
{
	t_double_list	*list_2d;
}	t_stack_double_list;

// Stack elements for one dimesional vector
t_stack_vec			*stack_create(size_t elements_size);
void				ft_stack_vec_destroy(t_stack_vec *vec);
bool				ft_stack_vec_is_empty(t_stack_vec *vec);
bool				ft_stack_vec_is_empty(t_stack_vec *vec);
void				ft_stack_vec_pop(t_stack_vec *vec);
void				ft_stack_vec_push_back(t_stack_vec *vec, void *elements);
size_t				ft_stack_vec_size(t_stack_vec *vec);
void				*ft_stack_vec_top(t_stack_vec *vec);

// Stack elements for two dimesional vector
t_stack_vec_2d		*stack_double_create(size_t column, size_t row);
void				ft_stack_destroy_two_d(t_stack_vec_2d *vec_2d);
bool				ft_stack_double_vec_is_empty(t_stack_vec_2d *vec_2d);
bool				ft_stack_double_vec_is_empty(t_stack_vec_2d *vec_2d);
void				ft_stack_vec_two_d_pop(t_stack_vec_2d *vec_2d);
void				ft_stack_double_vec_push_back(t_stack_vec_2d *vec_2d,
						t_stack_vec *vec);
size_t				ft_stack_vec_two_d_size(t_stack_vec_2d *vec_2d);
void				*ft_stack_two_d_top(t_stack_vec_2d *vec_2d);

// Stack elements for double linked list
t_stack_double_list	*stack_double_list_create(void *data);
void				ft_stack_list(t_stack_list **head);
bool				ft_stack_list_is_empty(t_stack_list **head);
bool				ft_stack_double_list_is_empty(t_stack_double_list **head);
void				ft_stack_double_list_pop(t_stack_double_list **head);
void				ft_stack_double_list_push_back(t_stack_double_list **head,
						void *data);
size_t				ft_stack_list_size(t_stack_list **head);
void				*ft_stack_list_top(t_stack_list **head);

// Stack elements for single lunked list
t_stack_list		*stack_list_create(void *data);
void				ft_stack_double_list(t_stack_double_list **head);
bool				ft_stack_double_list_is_empty(t_stack_double_list **head);
bool				ft_stack_list_is_empty(t_stack_list **head);
void				ft_stack_list_pop(t_stack_list **head);
void				ft_stack_list_push_back(t_stack_list **head, void *data);
size_t				ft_stack_double_list_size(t_stack_double_list **head);
void				*ft_stack_double_list_top(t_stack_double_list **head);

// Utils for clearing stack
void				free_stacks(t_stack_vec *vec, t_stack_vec_2d *vec_2d,
						t_stack_list **head, t_stack_double_list **double_list);
#endif
