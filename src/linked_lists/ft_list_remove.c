/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:56:16 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/16 18:29:11 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/linked_lists.h"

void	ft_double_linked_list_remove(t_double_list **head, size_t index)
{
	size_t			i;
	t_double_list	*temp;

	i = 0;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
}

void	ft_list_remove(t_list **head, size_t index)
{
	size_t		i;
	t_list		*tmp;
	t_list		*prev_node;

	i = 0;
	tmp = *head;
	while (i < index - 1)
	{
		tmp = tmp->next;
		i++;
	}
	prev_node = tmp->next;
	tmp->next = prev_node->next;
	free(prev_node);
}
