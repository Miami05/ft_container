/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:40:14 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/15 14:34:50 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LISTS_H

# define LINKED_LISTS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

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

// Doubly linked list
void	append_double_linked_list(t_double_list **head, void *data);
void	ft_double_linked_list_push_front(t_double_list **head, void *data);
void	ft_double_linked_list_push_back(t_double_list **head, void *data);

#endif
