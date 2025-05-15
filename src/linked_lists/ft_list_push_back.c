/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:24:06 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/15 14:22:05 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/linked_lists.h"

void	ft_double_linked_list_push_back(t_double_list **head, void *data)
{
	t_double_list	*next;
	t_double_list	*tmp;

	next = malloc(sizeof(t_double_list));
	if (!next)
		return ;
	next->data = data;
	next->next = NULL;
	next->prev = NULL;
	if (*head == NULL)
	{
		*head = next;
		return ;
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = next;
	next->prev = tmp;
}

void	ft_list_push_back(t_list **head, void *data)
{
	t_list			*next;
	t_list			*tmp;

	next = malloc(sizeof(t_list));
	if (!next)
		return ;
	next->data = data;
	next->next = NULL;
	if (*head == NULL)
	{
		*head = next;
		return ;
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = next;
}
