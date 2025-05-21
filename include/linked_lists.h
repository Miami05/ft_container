/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:40:14 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/21 14:01:54 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LISTS_H

# define LINKED_LISTS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}	t_list;

typedef struct s_double_list
{
	void					*data;
	struct s_double_list	*next;
	struct s_double_list	*prev;
}	t_double_list;

// One singly Linked List
void	append_node(t_list **head, void *data);
void	ft_list_push_front(t_list **head, void *data);
void	ft_list_push_front(t_list **head, void *data);
void	ft_list_push_back(t_list **head, void *data);
void	ft_list_pop_front(t_list **head);
void	ft_list_pop_back(t_list **head);
void	*ft_list_get(t_list **head, size_t index);
void	ft_list_remove(t_list **head, size_t index);
void	*ft_list_find(t_list **head, bool (*cmp)(void *a, void *b),
			void *target);
void	ft_list_destroy(t_list **head);
void	ft_list_clear(t_list **head);
int		ft_list_size(t_list **head);
t_list	*ft_list_create(void *data);

// Utils functions
bool	cmp(void *a, void *b);
void	del_linked_list(void *data);

// Doubly linked list
void	append_double_linked_list(t_double_list **head, void *data);
void	ft_double_linked_list_push_front(t_double_list **head, void *data);
void	ft_double_linked_list_push_back(t_double_list **head, void *data);
void	ft_double_list_pop_front(t_double_list **head);
void	ft_double_list_pop_back(t_double_list **head);
void	*ft_double_list_get(t_double_list **head, size_t index);
void	ft_double_linked_list_remove(t_double_list **head, size_t index);
void	ft_double_list_clear(t_double_list **head);
void	ft_double_list_destroy(t_double_list **head);
void	*ft_double_list_find(t_double_list **head,
			bool (*cmp)(void *a, void *b), void *target);
int		ft_double_list_size(t_double_list **head);
t_double_list	*ft_double_list_create(void *data);

#endif
