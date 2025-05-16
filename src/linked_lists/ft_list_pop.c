/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:23:16 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/15 22:46:46 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/linked_lists.h"

void	ft_double_list_pop_back(t_double_list **head)
{
	t_double_list	*tmp;
	t_double_list	*prev_node;

	tmp = *head;
	while (tmp->next)
	{
		prev_node = tmp;
		tmp = tmp->next;
	}
	prev_node->next = NULL;
	free(tmp);
}

void	ft_double_list_pop_front(t_double_list **head)
{
	t_double_list	*next;

	next = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(next);
}

void	ft_list_pop_front(t_list **head)
{
	t_list		*next;

	next = *head;
	*head = (*head)->next;
	free(next);
}

void	ft_list_pop_back(t_list **head)
{
	t_list		*tmp;
	t_list		*prev_node;

	tmp = *head;
	while (tmp->next)
	{
		prev_node = tmp;
		tmp = tmp->next;
	}
	if (tmp == *head)
		*head = NULL;
	else
		prev_node->next = NULL;
	free(tmp);
}
